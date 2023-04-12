#include "hash_tables.h"

/**
 * hash_table_set - insert a key, value pair to a hash table.
 * @ht: hash table to insert to.
 * @key: key
 * @value: value to be stored at that key.
 *
 * Return: 1 on SUCCESS otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *strg;
	hash_node_t *node;

	if (!ht || !key)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	if (value)
		strg = strdup(value);
	else
		strg = NULL;

	node = ht->array[index];

	if (!node)
		node = new_node(NULL);

	if (node->key)
	{
		ht->array[index] = update_node(node, key, strg);
		return (1);
	}
	node->key = strdup(key);
	node->value = strg;
	node->next = NULL;

	ht->array[index] = node;
	return (1);
}

/**
 * update_node - update or added a node if one already exists
 *
 * @node: pointer to a node the exist
 * @key: key
 * @value: value to update/create node with.
 *
 * Return: pointer to head of a list
 */
hash_node_t *update_node(hash_node_t *node, const char *key, char *value)
{
	hash_node_t *temp = node;

	while (temp)
	{

		if (!strcmp(key, temp->key))
		{
			free(temp->value);
			temp->value = value;
			return (node);
		}
		temp = temp->next;
	}

	temp = node;
	node = new_node(node);
	if (!node)
	{
		node = temp;
		return (node);
	}
	node->key = strdup(key);
	node->value = value;
	return (node);

}

/**
 * new_node - create a new node
 * @c_node: current node to add add at the end.
 *
 * Return: a point to the new node.
 */
hash_node_t *new_node(hash_node_t *c_node)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (NULL);
	node->key = NULL;
	node->value = NULL;
	node->next = c_node;

	return (node);
}

