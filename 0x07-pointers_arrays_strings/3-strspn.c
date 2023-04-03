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
	unsigned int i;
	unsigned int j;
	unsigned int count;

	i = 0;
	count = 0;
	while (accept[i])
	{
		j = 0;
		while (s[j])
		{
			if (s[j] == accept[i])
			{
				j++;
				count++;
			}
			j++;
		}
		i++;
	}
	return (count - 1);
}
