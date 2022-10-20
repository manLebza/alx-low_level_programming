#include "hash_tables.h"

/**
 * key_index -> generates distributed index according to a given hash
 * @key: the key passed
 * @size: the size of the hash tables
 * Return: key index
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (key == NULL || size == 0)
		return (0);

	return (hash_djb2(key) % size);
}
