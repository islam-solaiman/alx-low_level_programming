#include "main.h"

/**
 * binary_to_uint - function that converts
 * a binary number to an unsigned int.
 * @b: pointer to string of 0 and 1 chars
 * Return: the converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	int sum;
	int power;

	i = 0;
	sum = 0;
	power = 1;
	if (b == NULL)
		return (0);
	while (b[i])
		i++;
	i -= 1;
	while (i >= 0)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
			sum += power;
		power *= 2;
		i--;
	}
	return (sum);
}
