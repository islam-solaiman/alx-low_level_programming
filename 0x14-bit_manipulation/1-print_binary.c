#include "main.h"

/**
 * print_binary - function that
 * prints the binary representation of a number.
 * @n: number to be printed in pinary
 */

void print_binary(unsigned long int n)
{
	int digit;

	digit = n & 1;
	n = n >> 1;
	if (n > 0)
		print_binary(n);
	_putchar(digit + '0');
}
