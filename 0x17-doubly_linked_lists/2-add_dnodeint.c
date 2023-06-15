#include "lists.h"

/**
 * add_dnodeint - function adds new node at beginning of dlistint_t list.
 * @head: pointer to head of linked list
 * @n: intiger
 * Return:  address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	h = *head;
	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}
	new->next = h;
	if (h != NULL)
	{
		h->prev = new;
	}
	*head = new;
	return (new);
}
