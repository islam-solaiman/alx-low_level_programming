#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, *temp;
	hash_table_t *head = ht;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node = ht->array[i];
			while (node != NULL)
			{
				temp = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = temp;
			}
		}
	}
	free(head->array);
	free(head);
}
