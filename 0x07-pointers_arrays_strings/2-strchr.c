#include "main.h"

/**
 * _strchr - function that locates a character in a string.
 * @s: string to be scanned.
 * @c: character to be searched in str.
 * Return: pointer to the first occurrence of the character c in str,
 * or NULL if the character is not found.
 */

char *_strchr(char *s, char c)
{
	int i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (s + i);
}
