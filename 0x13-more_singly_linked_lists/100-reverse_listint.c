#include "lists.h"

/**
 * reverse_listint - function
 * that reverses a listint_t linked list.
 * @head: double pointer.
 * Return: a pointer to the first node of the reversed list.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *first;
	listint_t *last;

	first = NULL;
	last = NULL;
	while (*head)
	{
		last = (*head)->next;
		(*head)->next = first;
		first = *head;
		*head = last;
	}
	*head = first;
	return (*head);
}
