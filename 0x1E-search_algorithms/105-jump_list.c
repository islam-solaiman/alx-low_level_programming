#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Function searches for a value in an array of
 * integers using the Jump search algorithm
 * @list: input list
 * @size: size of the array
 * @value: value to search in
 * Return: index of the number
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	listint_t *prev;
	size_t indx, i, j;

	if (size == 0 || list == NULL)
		return (NULL);

	j = (size_t)sqrt((double)size);
	indx = 0;
	i = 0;

	do {
		prev = list;
		i++;
		indx = i * j;

		while (list->next && list->index < indx)
			list = list->next;

		if (list->next == NULL && indx != list->index)
			indx = list->index;

		printf("Value checked at index [%d] = [%d]\n", (int)indx, list->n);

	} while (indx < size && list->next && list->n < value);

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)prev->index, (int)list->index);

	for (; prev && prev->index <= list->index; prev = prev->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)prev->index, prev->n);
		if (prev->n == value)
			return (prev);
	}

	return (NULL);
}
