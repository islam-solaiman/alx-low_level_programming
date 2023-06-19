#include "main.h"

/**
 * _strcpy - function that copies the string pointed to by src,
 * including the terminating null byte (\0), to the buffer pointed to by dest.
 * @src: string to be copied
 * @dest: new string
 * Return: a pointer to the destination string dest.
 */

char *_strcpy(char *dest, char *src)
{
	int i;
	int len;

	len = 0;
	i = 0;
	while (src[len])
		len++;
	while (i <= len)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
