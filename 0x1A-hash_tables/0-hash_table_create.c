#include "hash_tables.h"

/**
 * hash_table_create - ...
 * @size: ...
 * Return: ...
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;

	if (size  == 0)
		return (NULL);
	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
		return (NULL);

	new_table->size = size;
	new_table->array = calloc((size_t)new_table->size, sizeof(hash_node_t *));
	if (!new_table->array)
		return (NULL);

	return (new_table);
}
