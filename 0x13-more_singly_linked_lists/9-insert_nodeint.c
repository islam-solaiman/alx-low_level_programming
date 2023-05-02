#include "lists.h"

/**
 * insert_nodeint_at_index - function
 * that inserts a new node at a given position.
 * @head: double pointer.
 * @idx: un signed integer.
 * @n: integer
 * Return:  the address of the new node, or NULL if it failed.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *tmp;
	unsigned int i;

	i = 0;
	tmp = *head;
	if (!*head && idx != 0)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	while (i < idx - 1)
	{
		if (tmp != NULL)
		{
			tmp = tmp->next;
			i++;
		}
		else
			return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);

}
