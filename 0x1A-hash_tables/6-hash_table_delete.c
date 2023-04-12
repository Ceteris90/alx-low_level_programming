#include "hash_tables.h"

/**
 * hash_table_delete - delete a hash table.
 * @ht: hash table to delete.
 *
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int index = 0;

	while (index < ht->size)
	{
		if (ht->array[index])
		{
			node = ht->array[index];
			delete_node(node);
		}
		index++;
	}
	free(ht->array);
	free(ht);
}

/**
 * delete_node - deletes a bucket
 * @node: nodes to delete
 */
void delete_node(hash_node_t *node)
{
	hash_node_t *temp;

	while (node)
	{
		temp = node;
		free(node->key);
		if (node->value)
			free(node->value);
		node = node->next;
		free(temp);
	}
}
