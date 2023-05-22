#include "main.h"

/**
 * error - function checks if files can be opened.
 * @from: file from.
 * @to: file to.
 * @argv: arguments vector.
 */
void error(int from, int to, char *argv[])
{
	if (from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}


/**
 * main - main function
 * @argc: the number of arguments.
 * @argv: the arguments vector.
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
	int from, to, error_close;
	ssize_t n_chars, n_wr;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
		exit(97);
	}

	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error(from, to, argv);

	n_chars = 1024;
	while (n_chars == 1024)
	{
		n_chars = read(from, buffer, 1024);
		if (n_chars == -1)
			error(-1, 0, argv);
		n_wr = write(to, buffer, n_chars);
		if (n_wr == -1)
			error(0, -1, argv);
	}

	error_close = close(from);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}

	error_close = close(to);
	if (error_close == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from);
		exit(100);
	}
	return (0);
}
