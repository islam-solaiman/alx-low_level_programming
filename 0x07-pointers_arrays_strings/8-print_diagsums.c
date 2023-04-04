#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - unction that prints the sum of the
 * two diagonals of a square matrix of integers.
 * @a: 2 dimention array.
 * @size: array size.
 */

void print_diagsums(int *a, int size)
{
	int i;
	unsigned int res1, res2;

	i = 0;
	res1 = 0;
	res2 = 0;
	while (i < size)
	{
		res1 += a[(size * i) + i];
		res2 += a[(size * (i + 1)) - (i + 1)];
		i++;
	}
	printf("%d, %d\n", res1, res2);
}
