#include "hash_tables.h"

/**
 * hash_table_print - prints/writes ht to SO
 * @ht: htable to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, stupidcommas = 0;

	if (!(ht))
	{
		return;
	}
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		while (ht->array[i])
		{
			if (stupidcommas == 1)
			{
				printf(", ");
			}
			stupidcommas = 1;
			printf("'%s': '%s'", ht->array[i]->key, ht->array[i]->value);
			ht->array[i] = ht->array[i]->next;
		}
	}
	printf("}\n");
}
