#include "lists.h"

/**
 * listint_len -  function that returns the number of
 * elements in a linked listint_t list.
 * @h: linked list
 * Return: number of elements.
 */

size_t listint_len(const listint_t *h)
{
	int i;

	i = 0;
	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
