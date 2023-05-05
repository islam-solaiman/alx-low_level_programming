#include "main.h"

/**
 * flip_bits - unction that returns the number of bits you
 * would need to flip to get from one number to another
 * @n: first number
 * @m: second number
 * Return: number of bits needed to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int n1;
	unsigned long int n2;
	unsigned long int sum;

	sum = 0;
	while (n | m)
	{
		n1 = n & 1;
		n2 = m & 1;
		if (n1 != n2)
			sum++;
		n = n >> 1;
		m = m >> 1;
	}
	return (sum);
}
