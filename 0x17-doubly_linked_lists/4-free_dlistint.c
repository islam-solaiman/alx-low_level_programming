#include "lists.h"

/**
 * free_dlistint - function that frees a dlistint_t list.
 * @head: head of linked list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	temp = head;
	while (temp)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
