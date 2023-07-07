#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table
 * @size: size of the table
 *
 * Description: Creates a new data structure
 * Return: Pointer to the newly created hash table.
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = malloc(sizeof(hash_table_t));
	hash_node_t *table_node;

	if (new_table == NULL)
	{
		return (NULL);
	}
	table_node = malloc(sizeof(hash_node_t) * size);
	if (table_node == NULL)
	{
		free(new_table);
		return (NULL);
	}
	return (new_table);
}
