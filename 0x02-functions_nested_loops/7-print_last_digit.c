#include "main.h"

/**
 * print_last_digit - function that prints the last digit of a number.
 *
 * @n: is the number to be passed as a parametter
 *
 * Return: is the value of the last digit
 */
int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	n %= 10;
	_putchar(n + '0');
	return (n);
}
