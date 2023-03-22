#include "main.h"


/**
 * print_times_table - function that prints the n times table, starting with 0.
 * @n: is the number of time to print the table
 */
void print_times_table(int n)
{
	int x, y, z;

	if ((n > 0) && (n < 15))
	{
		for (y = 0; y <= n; y++)
		{
			for (x = 0; x <= n; x++)
			{
				z = x * y;
				if (x == 0)
				{
					_putchar(z + '0');
				}
				if ((z <= n) && (x != 0))
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(z + '0');
				}
				else if ((z >= 10) && (z <= 99))
				{
					_putchar(',');
					_putchar(' ');
					_putchar((z / 10) + '0');
					_putchar((z % 10) + '0');
				}
				else if (z > 99)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((z / 100) + '0');
					_putchar(((z / 10) % 10) + '0');
					_putchar((z % 10) + '0');
				}

			}
			_putchar('\n');
		}
	}
}
