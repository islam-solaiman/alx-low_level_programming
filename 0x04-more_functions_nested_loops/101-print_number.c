#include "main.h"

/**
 *  print_number - function that prints an integer.
 *  @n: is the number to be printed
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		print_number(n * -1);
	}
	else if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		print_number(n / 10);
		print_number(n % 10);
	}
}
