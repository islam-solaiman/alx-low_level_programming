#include "main.h"

/**
 * get_bit -  function that returns
 * the value of a bit at a given index.
 * @n: number to return it's value
 * @index:  index, starting from 0 of the bit you want to get
 * Return: the value of the bit at index index or
 * -1 if an error occured
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp;

	if (!n || index > 64)
		return (-1);
	if (!index)
		return (n & 1);
	tmp = n >> index;
	return (tmp & 1);
}
