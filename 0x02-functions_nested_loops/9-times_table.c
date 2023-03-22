#include "main.h"


/**
 * times_table - function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	for (y = 0; y <= 9; y++)
	{
		for (x = 0; x <= 9; x++)
		{
			z = x * y;
			if (x == 0)
			{
				_putchar(z + '0');
			}
			if (z <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(z + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}

		}
		_putchar('\n');
	}
}
