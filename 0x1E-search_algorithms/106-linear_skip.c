#include "search_algos.h"

/**
 * linear_skip - Function searches for a value in a skip list
 * @list: input list
 * @value: value to search in
 * Return: index of the number
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *g;

	if (list == NULL)
		return (NULL);

	g = list;

	do {
		list = g;
		g = g->express;
		printf("Value checked at index ");
		printf("[%d] = [%d]\n", (int)g->index, g->n);
	} while (g->express && g->n < value);

	if (g->express == NULL)
	{
		list = g;
		while (g->next)
			g = g->next;
	}

	printf("Value found between indexes ");
	printf("[%d] and [%d]\n", (int)list->index, (int)g->index);

	while (list != g->next)
	{
		printf("Value checked at index [%d] = [%d]\n", (int)list->index, list->n);
		if (list->n == value)
			return (list);
		list = list->next;
	}
	return (NULL);
}
