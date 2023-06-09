#include "lists.h"

/**
 * sum_dlistint - function returns sum of all the data (n) of linked list.
 * @head: head of linked list
 * Return: sum of n in linked lists
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head->prev != NULL)
		head = head->prev;
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
