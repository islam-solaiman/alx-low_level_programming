#include "main.h"

/**
 * create_file -  function that creates a file.
 * @filename: POINTER TO A FILe
 * @text_content: string to write to the file
 * Return: truncated file
 */

int create_file(const char *filename, char *text_content)
{
	int fd, i;
	int write_bytes;

	i = 0;
	if (!filename)
		return (-1);
	while (text_content && text_content[i])
		i++;
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	write_bytes = write(fd, text_content, i);

	if (fd == -1 || write_bytes == -1)
		return (-1);
	close(fd);

	return (1);
}
