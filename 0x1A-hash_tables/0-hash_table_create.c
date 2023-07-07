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
	hash_node_t **table_nodes;
	unsigned long int i;

	i = 0;

	if (new_table == NULL)
	{
		return (NULL);
	}
	table_nodes = malloc(sizeof(hash_node_t *) * size);
	new_table->size = size;
	new_table->array = table_nodes;
	if (table_nodes == NULL)
	{
		free(new_table);
		return (NULL);
	}
	while (i < size)
	{
		table_nodes[i] = NULL;
		i++;
	}
	return (new_table);
}
