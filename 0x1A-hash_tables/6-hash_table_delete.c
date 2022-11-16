#include "hash_tables.h"

/**
 * hash_table_delete - safely frees hash table
 * @ht: hash table to be freed
 * Return: Nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		while ((ht->array[i]) != NULL)
		{
			tmp = (ht->array[i])->next;
			free((ht->array[i])->key);
			free((ht->array[i])->value);
			free(ht->array[i]);
			ht->array[i] = tmp;
		}
	}
	free(ht->array);
	free(ht);
}
