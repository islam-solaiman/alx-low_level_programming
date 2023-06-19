#include "main.h"

/**
 * _strcat -  function that concatenates two strings.
 * @src: string to be apended to the destination string.
 * @dest: string to be returned
 * Return:  pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;
	while (dest[i])
		i++;
	while (src[j])
		dest[i++] = src[j++];
	dest[i] = '\0';
	return (dest);
}
