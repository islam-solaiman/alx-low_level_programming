#include "main.h"

/**
 * set_bit - unction that sets the
 * value of a bit to 1 at a given index.
 * @n: number passed as pointer
 * @index: index for the posation to change.
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int x;

	x = 1;
	if (!index || index > 64)
		return (-1);
	while (index > 0)
	{
		x *= 2;
		index--;
	}
	*n += x;
	return (1);
}
