#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line on the terminal.
 * @n: umber of '_' to be printed
 */

void print_diagonal(int n)
{
	int i;
	int x;

	i = 1;
	x = 1;
	if (n <= 0)
		_putchar('\n');
	else
	{
		while (i <= n)
		{
			x = 1;
			if (i == 1)
			{
				_putchar('\\');
				_putchar('\n');
				i++;
			}
			while (x <= i && n != 1)
			{
				_putchar(' ');
				x++;

			}
			i++;
			_putchar('\\');
			_putchar('\n');
		}
	}
}
