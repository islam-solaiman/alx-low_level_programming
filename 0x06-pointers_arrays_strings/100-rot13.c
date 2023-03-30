#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: string to be encoded.
 * Return: new string after being encoded.
 */

char *rot13(char *s)
{
	int i;

	i = 0;
	while (s[i] && ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')))
	{
		if ((s[i] >= 'n' && s[i] <= 'z') || (s[i] >= 'N' && s[i] <= 'Z'))
			s[i] -= 13;
		else
			s[i] += 13;
		i++;
	}
	return (s);
}
