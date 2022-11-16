#include "hash_tables.h"

/**
 * hash_table_get - function to get a value from a table
 * @ht: hash table
 * @key: key to get value from
 * Return: value or null
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int my_index;

	if (ht == NULL || key == NULL)
		return (NULL);
	my_index = key_index((const unsigned char *) key, ht->size);
	while (ht->array[my_index] != NULL)
	{
		if (strcmp((ht->array[my_index])->key, key) == 0)
		{
			return ((ht->array[my_index])->value);
		}
		ht->array[my_index] = (ht->array[my_index])->next;
	}
	return (NULL);
}
