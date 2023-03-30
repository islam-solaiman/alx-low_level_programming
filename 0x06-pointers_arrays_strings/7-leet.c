#include "main.h"

/**
 * leet - function that encodes a string into 1337.
 * @s: string to be encoded.
 * Return: string with Encoded letters.
 */

char *leet(char *s)
{
	int i;
	int x;
	char *str1;
	char *str2;

	str1 = "a,A,e,E,o,O,t,T,l,L";
	str2 = "4,4,3,3,0,0,7,7,1,1";
	i = 0;
	x = 0;
	while (s[i])
	{
		while (str1[x])
		{
			if (s[i] == str1[x])
				s[i] = str2[x];
			x++;
		}
		i++;
	}
	return (s);
}
