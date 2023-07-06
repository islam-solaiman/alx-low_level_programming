#include "hash_tables.h"

/**
 * make_hash_node - function creates a new hash node
 * @key: key for the node
 * @value: value for the node
 * Return: new node or NULL on failure
 */

hash_node_t *make_hash_node(const char *key, const char *value)
{
	hash_node_t *h_node;

	h_node = malloc(sizeof(hash_node_t));
	if (h_node == NULL)
		return (NULL);
	h_node->key = strdup(key);
	if (h_node->key == NULL)
	{
		free(h_node);
		return (NULL);
	}
	h_node->value = strdup(value);
	if (h_node->value == NULL)
	{
		free(h_node->key);
		free(h_node);
		return (NULL);
	}
	h_node->next = NULL;
	return (h_node);
}


/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table  to add or update the key/value to
 * @key: key for the data
 * @value: data to store
 * Return: 1 if successful or 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int indx;
	hash_node_t *hash_node, *temp;
	char *new_value;

	if (ht == NULL || strlen(key) == 0 || value == NULL ||
			ht->array == NULL || ht->size == 0 || key == NULL)
		return (0);
	indx = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[indx];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(temp->value);
			temp->value = new_value;
			return (1);
		}
		temp = temp->next;
	}
	hash_node = make_hash_node(key, value);
	if (hash_node == NULL)
		return (0);
	hash_node->next = ht->array[indx];
	ht->array[indx] = hash_node;
	return (1);
}
