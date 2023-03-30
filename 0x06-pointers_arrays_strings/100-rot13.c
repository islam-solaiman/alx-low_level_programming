#include "main.h"

/**
 * rot13 - function that encodes a string using rot13.
 * @s: string to be encoded.
 * Return: new string after being encoded.
 */

char *rot13(char *s)
{
	int i;
	int x;
	char *a;
	char *b;

	a = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	b = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	i = 0;
	while (s[i])
	{
		x = 0;
		while (a[x])
		{
			if (s[i] == a[x])
			{
				s[i] = b[x];
				break;
			}
			x++;
		}
		i++;
	}
	return (s);
}
