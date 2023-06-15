#include "lists.h"

/**
 * dlistint_len - function returns number of elements in linked dlistint_t list
 * @h: pointer to linked list
 * Return: number of element in lined list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
