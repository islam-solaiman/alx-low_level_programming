#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 *  @head: double pointer to head.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
		return;
	while (*head)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
