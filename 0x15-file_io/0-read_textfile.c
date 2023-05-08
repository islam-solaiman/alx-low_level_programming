#include "main.h"

/**
 *  read_textfile - function that reads a text
 *  file and prints it to the POSIX standard output.
 *  @filename: pointer to a file to read.
 *  @letters:  number of letters it should read and print.
 *  Return: actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *temp;
	int read_bytes;
	int write_bytes;

	if (!filename || letters == 0)
		return (0);
	temp = malloc(letters + 1);
	if (!temp)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		free(temp);
		return (0);
	}
	read_bytes = read(fd, temp, letters);
	write_bytes = write(STDOUT_FILENO, temp, read_bytes);
	if (read_bytes == -1 || write_bytes == -1)
	{
		free(temp);
		return (0);
	}
	free(temp);
	close(fd);
	return (write_bytes);
}
