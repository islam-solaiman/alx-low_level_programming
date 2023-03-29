#include "main.h"

/**
 * _strncat - function that concatenates two strings.
 * it will use at most n bytes from src;
 * src does not need to be null-terminated if it contains n or more bytes
 * @src:  string to be appended to the dest string,
 * @dest: string to be returned
 * @n: number of bytes to be appended from src to dest
 * Return: a pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j] && j < n)
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
