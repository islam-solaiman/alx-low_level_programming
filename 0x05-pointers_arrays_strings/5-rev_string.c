#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: is the string to be reversed
 */

void rev_string(char *s)
{
	int i;
	int x;
	char c;
	char d;

	i = 0;
	x = 0;
	while (s[i])
		i++;
	i -= 1;
	while (x < (i + 1))
	{
		c = s[i];
		d = s[x];
		s[i] = d;
		s[x] = c;
		i--;
		x++;
	}
}
