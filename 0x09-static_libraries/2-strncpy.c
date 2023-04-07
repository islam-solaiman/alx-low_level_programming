#include "main.h"

/**
 * _strncpy - function that copies a string.
 * @dest: destination array where the content is to be copied.
 * @src: This is the string to be copied.
 * @n:  The number of characters to be copied from source.
 * Return: the pointer to the copied string.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (src[j] && j < n)
		dest[i++] = src[j++];
	while (i < n)
		dest[i++] = '\0';
	return (dest);
}
