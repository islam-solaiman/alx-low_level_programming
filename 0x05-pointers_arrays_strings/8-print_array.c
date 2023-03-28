#include "main.h"
#include <stdio.h>

/**
 * print_array -  function that prints n elements of an array of integers
 * followed by a new line
 * @a: array of elements ofintigers to be printed
 * @n: number of element to be printed
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	if (n == 1)
		printf("%d\n", i);
	else if (n > 1)
	{
		while (i < (n - 1))
		{
			printf("%d, ", a[i]);
			i++;
		}
		printf("%d\n", a[i]);
	}
}
