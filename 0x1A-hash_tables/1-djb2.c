#include "hash_tables.h"

/**
 * hash_djb2 - implements a djb2 algorithm
 * @str: string used to generate a hash code
 *
 * Description: hash function that creates a hash value
 * Return: hash code.
 */

unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /*hash * 33 + c */
	}
	return (hash);
}
