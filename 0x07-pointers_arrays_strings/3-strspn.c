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

	j = 0;
	count = 0;
	while (s[j])
	{
		if (s[j] != '\0')
		{
			i = 0;
			while (accept[i])
			{
				if (s[j] == accept[i])
				{
					count++;
				}
				i++;
			}
			j++;
		}
		else
			return (count);
	}
	return (count - 2);
}

