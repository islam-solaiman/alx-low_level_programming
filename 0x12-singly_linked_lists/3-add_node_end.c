#include "lists.h"

/**
 * add_node_end - function that adds a new node at the end of a list_t list.
 * @head: head of linked list
 * @str: string
 * Return: the address of the new element, or NULL if it failed
 */


list_t *add_node_end(list_t **head, const char *str)
{
	list_t *s1;
	list_t *s2 = *head;
	unsigned int i;

	i = 0;
	while (str[i])
		i++;

	s1 = malloc(sizeof(list_t));
	if (!s1)
		return (NULL);

	s1->str = strdup(str);
	s1->len = i;
	s1->next = NULL;

	if (*head == NULL)
	{
		*head = s1;
		return (s1);
	}

	while (s2->next)
		s2 = s2->next;

	s2->next = s1;

	return (s2);
}
