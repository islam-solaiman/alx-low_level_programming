#include "main.h"

/**
 * print_square -  function that prints a square, followed by a new line
 * @size: is the size of the sqaure
 */
void print_square(int size)
{
	int i;
	int raw;

	i = 0;
	if (size <= 0)
		_putchar('\n');
	else
	{
		while (i < size)
		{
			raw = 0;
			while (raw < size)
			{
				_putchar('#');
				raw++;
			}
			_putchar('\n');
			i++;
		}
	}
}
