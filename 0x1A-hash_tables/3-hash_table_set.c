#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the tb
 * @ht: Pointer to the table
 * @key: The key t store
 * @value: The val corresponding to the key
 *
 * Description: Function uses previous functions
 * Return: index.
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new_node = NULL, *prev_head = NULL;

	if (ht == NULL || key == NULL || value == NULL)
	{
		return (0);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	new_node->key = (char *) strdup(key);
	new_node->value = (char *) strdup(value);
	new_node->next = NULL;
	if ((ht->array)[index] == NULL)
	{
		(ht->array)[index] = new_node;
		return (1);
	}
	else
	{
		prev_head = (ht->array)[index];
		while (prev_head)
		{
			if (strcmp(prev_head->key, key) == 0)
			{
				free(prev_head->value);
				prev_head->value = (char *) strdup(value);
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				return (1);
			}
			prev_head = prev_head->next;
		}
		prev_head = (ht->array)[index];
		new_node->next = prev_head;
		(ht->array)[index] = new_node;
		return (1);
	}
}
