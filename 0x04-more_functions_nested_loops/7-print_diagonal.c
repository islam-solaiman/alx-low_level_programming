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
			while (x <= n)
			{
				if (x == i)
					_putchar('\\');
				else if (x < i)
					_putchar(' ');
				x++;

			}
			i++;
			_putchar('\n');
		}
	}
}
