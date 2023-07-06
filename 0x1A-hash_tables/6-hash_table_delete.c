#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table.
 * @ht: is the hash table
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *nxt;
	unsigned long int i = 0;

	if (ht->size == 0 || ht == NULL || ht->array == NULL)
		return;
	while (ht->size)
	{
		while (ht->array[i] != NULL)
		{
			nxt = ht->array[i]->next;
			free(ht->array[i]->key);
			free(ht->array[i]->value);
			free(ht->array[i]);
			ht->array[i] = nxt;
		}
		i++;
	}
	free(ht->array);
	ht->array = NULL;
	ht->size = 0;
	free(ht);
}
