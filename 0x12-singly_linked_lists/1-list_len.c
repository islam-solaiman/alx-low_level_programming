#include "lists.h"

/**
 * list_len - function that returns number of elements in list_t list.
 * @h: linked list.
 * Return: number of element in linked list
 */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 1;
	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i - 1);
}
