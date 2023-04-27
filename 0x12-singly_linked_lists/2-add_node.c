#include "lists.h"

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: head of the new list
 * @str: new string to add the node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int i;

	i = 0;
	while (str[i])
		i++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;
	return (*head);
}
