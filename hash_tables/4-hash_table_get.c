#include "hash_tables.h"

/**
 * hash_table_get - find a value with a key
 * @ht: the hash table
 * @key: the key we are looking for
 *
 * Return: the value that we want with the key or NULL if it failed
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *node;

	idx = 0;
	if (ht == NULL || key == NULL || *key == '\0')
	return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	node = ht->array[idx];

	while (node != NULL)
	{
		if (strcmp(node->key, key) == 0)
		return (node->value);
		node = node->next;
	}
	return (NULL);
}
