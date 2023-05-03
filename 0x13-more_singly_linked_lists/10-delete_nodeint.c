 #include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes
 * the node at index index of a listint_t linked list
 * @head: double pointer head.
 * @index: unsigned int.
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *tmp1;
	listint_t *tmp2;

	i = 0;
	tmp1 = *head;
	tmp2 = NULL;
	if (!*head)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp1);
		return (1);
	}
	while (i < index - 1)
	{
		if (tmp1->next == NULL)
			return (-1);
		tmp1 = tmp1->next;
		i++;
	}
	tmp2 = tmp1->next;
	tmp1->next = tmp2->next;
	free(tmp2);
	return (1);

}

