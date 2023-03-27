#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: first value to be passed as a parametter.
 * @b: second value to be passed as a parametter.
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
