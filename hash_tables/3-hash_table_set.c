#include "hash_tables.h"

/**
 * create_node - create a node
 * @key: key we add
 * @value: value inside the key
 *
 * Return: pointer to the new node, or NULL if it failed
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *new_node;

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	return (NULL);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (NULL);
	}

	new_node->next = NULL;
	return (new_node);
}

/**
 * hash_table_set - Adds or updates an element in the hash table
 * @ht: Hash table
 * @key: Key
 * @value: Value inside key
 * Return: 1 on success, 0 if it failed
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *tmp;
	hash_node_t *new_node;
	char *new_value;

	if (ht == NULL || key == NULL || strlen(key) == 0 || value == NULL)
	return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[idx];

	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
			return (0);

			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}

	new_node = create_node(key, value);
	if (new_node == NULL)
	return (0);

	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;

	return (1);
}
