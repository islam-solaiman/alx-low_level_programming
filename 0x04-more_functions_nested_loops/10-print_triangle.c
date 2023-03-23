#include "main.h"

/**
 * print_triangle - function that prints a triangle, followed by a new line.
 * @size: is the size of the triangle.
 */

void print_triangle(int size)
{
	int raw;

	raw = 1;
	if (size <= 0)
		_putchar('\n');
	while (raw <= size)
	{
		int hash;
		int space;

		hash = 1;
		space = size - raw;
		while (space >= hash)
		{
			_putchar(' ');
			space--;
		}
		while (hash <= raw)
		{
			_putchar('#');
			hash++;
		}
		raw++;
		_putchar('\n');
	}
}
