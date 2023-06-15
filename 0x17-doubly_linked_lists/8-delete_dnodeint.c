#include "lists.h"

/**
 * delete_dnodeint_at_index - function deletes node
 * at index index of a dlistint_t linked list.
 * @head: pointer to linked list
 * @index: index of node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *node1;
	dlistint_t *node2;
	unsigned int i;

	node1 = *head;

	if (node1 != NULL)
		while (node1->prev != NULL)
			node1 = node1->prev;

	i = 0;

	while (node1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = node1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				node2->next = node1->next;

				if (node1->next != NULL)
					node1->next->prev = node2;
			}

			free(node1);
			return (1);
		}
		node2 = node1;
		node1 = node1->next;
		i++;
	}

	return (-1);
}
