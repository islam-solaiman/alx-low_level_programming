#include "search_algos.h"

/**
 * recursive_search - function searches for value in
 * sorted array of integers using the Binary search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int recursive_search(int *array, size_t size, int value)
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
		return ((int)half);

	if (value < array[half])
		return (recursive_search(array, half, value));

	half++;

	return (recursive_search(array + half, size - half, value) + half);
}

/**
 * binary_search - function searches for value in sorted
 * array of integers using the Binary search algorithm
 * @array: input array
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

int binary_search(int *array, size_t size, int value)
{
	int indx;

	indx = recursive_search(array, size, value);

	if (array[indx] != value && indx >= 0)
		return (-1);

	return (indx);
}
