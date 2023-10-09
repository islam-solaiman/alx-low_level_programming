#include "search_algos.h"

/**
 * interpolation_search - function searches for value in
 * sorted array of integers using the Interpolation search
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t p, l, h;
	double f;

	if (array == NULL)
		return (-1);

	l = 0;
	h = size - 1;

	while (size)
	{
		f = (double)(h - l) / (array[h] - array[l]) * (value - array[l]);
		p = (size_t)(l + f);
		printf("Value checked array[%d]", (int)p);

		if (p >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[p]);
		}

		if (array[p] == value)
			return ((int)p);

		if (array[p] < value)
			l = p + 1;
		else
			h = p - 1;

		if (l == h)
			break;
	}

	return (-1);
}
