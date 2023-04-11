#include "hash_tables.h"


/**
 * hash_table_create - This function will create a hash table
 * @size: size for the table/array to be.
 *
 * Return: a pointer to the table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int index = 0;
	hash_table_t *table;

	if (size <= 0)
	{
		return (NULL);
	}

	table = malloc(sizeof(hash_table_t));

	if (table == NULL)
	{
		return (NULL);
	}

	table->size = size;
	table->array = calloc(size, sizeof(hash_node_t *));

	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}

	for ( ; index < size; ++index)
	{
		table->array[index] = NULL;
	}

	return (table);
}

