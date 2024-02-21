#include "hash_tables.h"

/**
 * key_index - get the index at which value should be
 * stoed in array of a hash table
 * @key: the key to get the index
 * @size: the size of the array
 * Return: index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
