#include "hash_tables.h"

/**
 * key_index - gives the index of a key
 * @key: the key
 * @size: size of the array of the hash table
 * Return: the idex where the key/value pair
 * should be stored in the array of the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	if (!key || !size)
		return (0);
	return (hash_djb2(key) % size);
}
