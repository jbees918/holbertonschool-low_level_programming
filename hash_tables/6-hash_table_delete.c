#include "hash_tables.h"

/**
 * hash_table_delete - deletes hash_table_t ht
 * @ht: htable to delete
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *scrubber, *loader;

	if (!(ht))
	{
		return;
	}
	else if (!(ht->array) || ht->size <= 0)
	{
		free(ht);
		return;
	}
	for (i = 0; i < ht->size; i++)
	{
		loader = ht->array[i];
		while (loader)
		{
			scrubber = loader->next;
			if (loader->value)
				free(loader->value);
			free(loader->key);
			free(loader);
			loader = scrubber;
		}
	}
	free(ht->array);
	free(ht);
}
