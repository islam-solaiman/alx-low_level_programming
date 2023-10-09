#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function searches for value in sorted
 * array integers using the Jump search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int jump_search(int *array, size_t size, int value)
{
	int indx, i, j, prev;

	if (size == 0 || array == NULL)
		return (-1);

	j = 0;
	i = (int)sqrt((double)size);
	prev = indx = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", indx, array[indx]);

		if (array[indx] == value)
			return (indx);
		j++;
		prev = indx;
		indx = i * j;
	} while (indx < (int)size && array[indx] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, indx);

	for (; prev <= indx && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
