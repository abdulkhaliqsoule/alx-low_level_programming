#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to add
 * @key: the key
 * @value: value associated with the key
 * Return: 1 on success, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int pos;
	hash_node_t *new_el, *actual;

	if (!ht || !key || !(*key) || value == NULL)
		return (0);
	pos = key_index((unsigned char *)key, ht->size);
	actual = ht->array[pos];

	while (actual)
	{
		if (!strcmp(key, actual->key))
		{
			free(actual->value);
			actual->value = strdup(value);
			return (1);
		}
		actual = actual->next;
	}

	new_el = malloc(sizeof(hash_node_t));
	if (!new_el)
		return (0);
	new_el->key = strdup(key);
	new_el->value = strdup(value);
	new_el->next = ht->array[pos];

	ht->array[pos] = new_el;
	return (1);
}

