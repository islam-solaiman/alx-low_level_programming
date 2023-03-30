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

	i = 0;
	while (i < n)
	{
		n--;
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		i++;
	}
}
