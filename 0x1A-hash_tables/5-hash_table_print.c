#include "hash_tables.h"

/**
 * hash_table_print - print out the hash table.
 * @ht: hash table to read from.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index, value;
	hash_node_t *node;

	index = value = 0;
	if (!ht)
		return;

	printf("{");

	while (index < ht->size)
	{
		node = ht->array[index];
		while (node)
		{
			printf("\'%s\': \'%s\'", node->key, node->value);

			if (node->next)
				printf(", ");
			node = node->next;
		}

		while (!(ht->array[index + 1]))
			index++;

		if (value && index < ht->size)
			printf(", ");
		else
			value = 1;
		index++;
	}
	printf("}\n");
}
