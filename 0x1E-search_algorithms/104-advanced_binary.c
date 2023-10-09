#include "search_algos.h"

/**
 * rec_search - Function searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int rec_search(int *array, size_t size, int value)
{
	size_t i = 0;
	size_t half = size / 2;

	if (size == 0 || array == NULL)
		return (-1);

	printf("Searching in array");

	while (i < size)
	{
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);
		i++;
	}
	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (rec_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (rec_search(array, half + 1, value));

	half++;
	return (rec_search(array + half, size - half, value) + half);
}

/**
 * advanced_binary - Function calls to rec_search to return
 * the index of the number
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int advanced_binary(int *array, size_t size, int value)
{
	int indx;

	indx = rec_search(array, size, value);

	if (array[indx] != value && indx >= 0)
		return (-1);

	return (indx);
}
