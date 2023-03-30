#include "main.h"

/**
 * string_toupper - function that changes
 * all lowercase letters of a string to uppercase.
 * @s: string to be changed to uppercase
 * Return: new string with uppercase latters
 */

char *string_toupper(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		if (s[i] >= 97 && s[i] <= 122)
			s[i] -= 32;
		i++;
	}
	return (s);
}
