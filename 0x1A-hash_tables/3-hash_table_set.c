#include "hash_tables.h"
#include <string.h>

/**
 * hash_table_set - function to add

 * an element to the hash table.
 * @ht: hash table to add or update key/value to
 * @key: the key, cant be empty
 * @value: associated with key, must be duplicated, cant be
 * empty.
 *
 * Return: 1 for success, otherwise 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *cur;
	unsigned long int index;

	if (strcmp(key, "") == 0 || key == NULL || ht == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup((char *)key);
	new->value = strdup((char *)value);
	new->next = NULL;
	if (ht->array[index] == NULL)
		ht->array[index] = new;
	else
	{
		cur = ht->array[index];
		if (strcmp(cur->key, key) == 0)
		{
			new->next = cur->next;
			ht->array[index] = new;
			free(cur);
			return (1);
		}
		while (cur->next != NULL && strcmp(cur->next->key, key) != 0)
		{
			cur = cur->next;
		}
		if (strcmp(cur->key, key) == 0)
		{
			new->next = cur->next->next;
			free(cur->next);
			cur->next = new;
		}
		else
		{
			new->next = ht->array[index];
			ht->array[index] = new;
		}
	}	return (1);
}
