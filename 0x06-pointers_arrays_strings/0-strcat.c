#include "main.h"

/**
 * _strcat -  function that concatenates two strings.
 * @src: string to be apended to the destination string.
 * @dest: string to be returned
 * Return:  pointer to the resulting string dest.
 */

char *_strcat(char *dest, char *src)
{
	char *new;

	while (*dest)
		*new++ = *dest++;
	while (*src)
		*new++ = *src++;
	return (new);
}
