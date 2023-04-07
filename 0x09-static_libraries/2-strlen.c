#include "main.h"

/**
 *  _strlen - function that returns the length of a string.
 *  @s: string to be passed as a parametter
 *  Return: length of a string
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}
