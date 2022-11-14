#include "hash_tables.h"

/**
 * hash_table_set - function to add
 * an element to the hash table.
 *
 * @ht: hash table to add or update key/value to
 * @key: the key, cant be empty
 * @value: associated with key, must be duplicated, cant be
 * empty.
 *
 * Return: 1 for success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new = malloc(sizeof(hash_node_t));
	unsigned long int index;

	if (!new)
		return (0);
	if (!key || !value || !ht)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		return (1);
	}
	new->next = ht->array[index];
	ht->array[index] = new;

	return (1);
}
