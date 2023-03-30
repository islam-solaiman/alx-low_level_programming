#include "main.h"

/**
 * print_number - function that prints an integer.
 * @n: is the number to be printed.
 */

void print_number(int n)
{
	if (n == -2147483648)
	{
		_putchar('-');
		_putchar('2');
		print_number(147483648);
	}
	if (n < 0)
	{
		_putchar('-');
		print_number(n * -1);
	}
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}
