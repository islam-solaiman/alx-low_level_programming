#include "main.h"

/**
 * clear_bit - function that sets
 * the value of a bit to 0 at a given index.
 * @n: number passed as pointer
 * @index: index for the posation to change.
 * Return: 1 if it worked, or -1 if an error occurred
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	x = 1;
	if (index > 64)
		return (-1);
	while (index > 0)
	{
		x *= 2;
		index--;
	}
	x = ~x;
	*n = *n & x;
	return (1);
}
