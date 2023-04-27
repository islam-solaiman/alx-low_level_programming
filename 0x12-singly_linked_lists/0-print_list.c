#include "lists.h"

/**
 * print_list -  function that prints  elements of a list_t list
 * @h: linked list.
 * Return: number of nodes.
 */

size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	if (h == NULL)
		return (0);
	while (h)
	{
		if (!h->str)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s", h->len, h->str);
		h = h->next;
		i++;
	}
	return (i);
}
