#include "main.h"

/**
 * print_alphabet_x10 - function ptints alphabet 10 times
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int i;
	int x;
	char *str;

	i = 0;
	x = 1;
	str = "abcdefghijklmnopqrstuvwxyz";
	while (x <= 10)
	{
		while (str[i])
		{
			_putchar(str[i]);
			i++;
		}
		_putchar('\n');
		i = 0;
		x++;
	}
}
