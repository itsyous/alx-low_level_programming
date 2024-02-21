#include "hash_tables.h"

/**
 * hash_table_get - get the value associated with
 * a key
 * @ht: a pointer to hash table
 * @key: the key to get the value
 * Return: NULL, if the key can't be matched,
 * othzewise - the value associated with a key in ht
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	insigned long int index;

	if (ht == NULL || key == NULL || *key == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	node = ht->array[index];
	while (node && strcmp(node->key, key) != 0)
		node = node->next;
	return ((node == NULL) ? NULL : node->value);
}