#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table.
 * @ht: is the hash table
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int idx = 0;
	hash_node_t *tmp = NULL;
	char *sep = "";

	if (ht == NULL)
		return;

	printf("{");
	while (idx < ht->size)
	{
		tmp = ht->array[idx];
		while (tmp)
		{
			printf("%s'%s': '%s'", sep, tmp->key, tmp->value);
			sep = ", ";
			tmp = tmp->next;
		}
		idx += 1;
	}
	printf("}\n");
}
