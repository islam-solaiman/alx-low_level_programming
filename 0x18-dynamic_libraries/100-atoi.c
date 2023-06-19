#include "main.h"

/**
 * _atoi - function that convert a string to an integer.
 * @s: is the string tobe converted
 * Return: is an intiger
 */

int _atoi(char *s)
{
	unsigned int temp;
	int x;

	temp = 0;
	x = 1;
	do {
		if (*s == '-')
			x *= -1;
		else if (*s >= '0' && *s <= '9')
			temp = (temp * 10) + (*s - '0');
		else if (temp > 0)
			break;
	} while (*s++);

	return (temp * x);

}
