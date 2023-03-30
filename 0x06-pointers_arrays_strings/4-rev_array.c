#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: string to be reversed.
 * @n:  number of elements of the array
 */

void reverse_array(int *a, int n)
{
	char temp;
	int i;
	int x;

	i = 0;
	x = n - 1;
	while (i < n / 2)
	{
		temp = a[i];
		a[i] = a[x];
		a[x] = temp;
		i++;
		x--;
	}
}
