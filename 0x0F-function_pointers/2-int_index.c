#include <stddef.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of int.
 * @size: size of array
 * @cmp: pointer to function.
 * Return:  index of the first element.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	i = 0;
	if (array && cmp)
	{
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	}
	return (-1);
}
