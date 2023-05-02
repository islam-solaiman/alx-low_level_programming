#include "lists.h"

/**
 * get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list.
 * @head: head of linked list.
 * @index: unsigned int.
 * Return: nth node of the list.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *temp;

	temp = head;
	i = 0;
	if (!head)
		return (NULL);
	while (i < index)
	{
		temp = temp->next;
		i++;
	}
	if (!temp)
		return (NULL);
	else
		return (temp);
}
