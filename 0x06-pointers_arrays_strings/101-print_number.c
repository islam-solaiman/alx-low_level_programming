#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: is the number to be printed.
 */

void print_number(int n)
{
	unsigned int n1;

	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}

	n1 = n;

	if (n1 / 10)
		print_number(n1 / 10);

	_putchar(n1 % 10 + '0');
}
