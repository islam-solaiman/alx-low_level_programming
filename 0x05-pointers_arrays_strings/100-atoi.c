#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: is the string tobe converted
 * Return: is an intiger
 */

int _atoi(char *s)
{
	int i;
	int d;
	int x;
	int temp;

	i = 0;
	d = 1;
	x = 0;
	temp = 0;
	if (!s[i])
		return ('\0');
	while (s[i] && (!((s[i] >= '0' && s[i] <= '9'))))
	{
		if (s[i] == '-')
			x++;
		i++;
	}
	if (x % 2 > 0 || x == 1)
		d *= -1;
	i = 0;
	while (!((s[i] >= '0' && s[i] <= '9')))
		i++;
	while (s[i] >= '0' && s[i] <= '9')
	{
		temp = (s[i] - '0') + (temp * 10);
		i++;
	}
	return (temp * d);
}
