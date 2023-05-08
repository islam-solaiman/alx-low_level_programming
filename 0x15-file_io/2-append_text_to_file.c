#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: pointer to a file
 * @text_content: string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int i, fd, write_bytes;

	i = 0;
	if (!filename)
		return (-1);
	if (!text_content)
		return (1);
	while (text_content && text_content[i])
		i++;
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	write_bytes = write(fd, text_content, i);
	if (write_bytes == -1)
		return (-1);
	close(fd);
	return (1);

}
