#include "lists.h"

/**
 * print_dlistint -  function prints the elements of dlistint_t list.
 * @h: pointer to linked list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
