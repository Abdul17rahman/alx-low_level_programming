#include "hash_tables.h"

/**
 * key_index - calculates the index of the key
 * @key: The key to compute the index
 * @size: The size of the table
 *
 * Description: Function uses the generated key to cal the index
 * Return: index.
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash = hash_djb2(key);

	hash %= size;
	return (hash);
}
