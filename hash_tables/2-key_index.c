#include "hash_tables.h"

/**
* key_index - the index of a key inside the hash table
* @key: the index
* @size: the size of the array
*
* Return: the index with the value that we are looking for
*/

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
