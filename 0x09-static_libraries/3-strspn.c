#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: string to be scanned.
 * @accept: string containing the characters to match.
 * Return: the number of bytes in the initial segment
 * of s which consist only of bytes from accept.
 */

unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	int count;

	count = 0;
	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] != ' ')
		{
			for (i = 0; accept[i] != '\0'; i++)
			{
				if (s[j] == accept[i])
					count++;
			}
		}
		else
			return (count);
	}
	return (count);
}

