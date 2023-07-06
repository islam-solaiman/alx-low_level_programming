#include "hash_tables.h"

/**
 * hash_table_get - function retrieves value associated with a key.
 * @ht: hash table you want to look into
 * @key: key to find value
 * Return: value associated with the element, or NULL if key not found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int indx;
	hash_node_t *temp;

	if (ht == NULL || strlen(key) == 0 || ht->array == NULL ||
			ht->size == 0 || key == NULL)
		return (0);
	indx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[indx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
