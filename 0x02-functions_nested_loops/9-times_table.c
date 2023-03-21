#include "main.h"


/**
 * times_table - function that prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	x = 0;
	while (x <= 9)
	{
		y = 0;
		while (y <= 9)
		{
			z = x * y;
			if (z <= 9)
				_putchar(z + '0');
			else if (z > 9)
			{
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
			}
			else
				_putchar(0 + '0');
			if (y < 9)
			{
				if (z <= 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				else
				{
					_putchar(',');
					_putchar(' ');
				}
			}

			y++;
		}
		_putchar('\n');
		x++;
	}
}
