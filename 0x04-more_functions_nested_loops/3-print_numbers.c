#include "main.h"

/**
 * print_numbers -  function that prints the numbers, from 0 to 9,
 * followed by a new line
 * Return: numbers from 0 to 9
 */

void print_numbers(void)
{
	int i;

	i = 48;
	while (i <= 57)
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
