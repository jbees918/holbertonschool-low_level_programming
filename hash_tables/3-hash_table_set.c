#include "hash_tables.h"

/**
 * hash_table_set - function that adds ele to htable
 * @ht: htable to add kv to
 * @key: key to be added OR HAVE VALUE UPDATED
 * @value: value paired w key
 * Return: 1 on success 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *newNode;
	unsigned long int hashKey, idx, i;

	if (!(ht) || !(key) || !(value) || (!(key[0])))
	{
		return (0);
	}
	newNode = malloc(sizeof(hash_node_t));
	if (!(newNode))
	{
		return (0);
	}
	hashKey = hash_djb2((const unsigned char *)key);
	idx = hashKey % ht->size;
	/* check if key already exists and if so update its value pair */
	for (i = idx; ht->array[i]; i++)
	{
		if (!(strcmp(key, ht->array[i]->key)))
		{
			free(newNode);
			ht->array[i]->value = strdup(value);
			return (1);
		}
	}
	/* populate new node and make first in array */
	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;
	return (1);
}
