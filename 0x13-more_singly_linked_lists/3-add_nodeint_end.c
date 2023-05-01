#include "lists.h"

/**
 * add_nodeint_end -  function that adds a new node
 * at the end of a listint_t list.
 * @head: head of list
 * @n: integer.
 * Return: address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *s1;
	listint_t *s2;

	s2 = *head;
	s1 = malloc(sizeof(listint_t));

	if (!s1)
		return (NULL);

	s1->n = n;
	s1->next = NULL;

	if (*head == NULL)
	{
		*head = s1;
		return (s1);
	}
	while (s2->next != NULL)
		s2 = s2->next;
	s2->next = s1;
	return (s1);
}
