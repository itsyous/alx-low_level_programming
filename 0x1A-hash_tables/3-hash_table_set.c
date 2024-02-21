#include "hash_tables.h"

/**
 * hash_table_set - add a new element to the hash table
 * @ht: a pointer to the hash table
 * @key: the key to add
 * @value: the value associated with key
 * Return: 1 if successful, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_element;
	char *new_value;
	unsigned long int index, i;

	if (ht == NULL || key == NULL || value == NULL || *key == '\0')
		return (0);

	new_value = strdup(value);
	if (new_value == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (i = index; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = new_value;
			return (1);
		}
	}
	new_element = malloc(sizeof(hash_node_t));
	
	if (new_element == NULL)
		return (0);

	new_element->value = new_value;
	new_element->next = ht->array[index];
	ht->array[index] = new_element;

	return (1);
}
