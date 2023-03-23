#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal.
 * @n: umber of times the character _ should be printed
 */

void print_line(int n)
{
	int i;

	i = 1;
	if (n == 0)
		_putchar('\n');
	else
	{
		while (i <= n)
		{
			_putchar('_');
			i++;
		}
		_putchar('\n');
	}
}
