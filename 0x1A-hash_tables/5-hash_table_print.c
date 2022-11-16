#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 * Return: Nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0, counter = 0;
	hash_node_t *init = NULL;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			init = ht->array[i];
			while ((ht->array[i]) != NULL)
			{
				if (counter != 0)
				{
					printf(", ");
					fflush(stdout);
				}
				counter++;
				printf("'%s': '%s'", (ht->array[i])->key, (ht->array[i])->value);
				fflush(stdout);
				ht->array[i] = ht->array[i]->next;
			}
			ht->array[i] = init;
		}
	}
	printf("}\n");
}
