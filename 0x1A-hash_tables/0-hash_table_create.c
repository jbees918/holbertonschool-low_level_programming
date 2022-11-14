#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table.
 *
 * @size: size of the array
 *
 * Return: a pointer to the new hash table, otherwise NULL
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table = NULL;

	if (size == 0)
		return (NULL);

	hash_table = malloc(sizeof(hash_table_t));
	if (!hash_table)
		return (NULL);

	hash_table->array = calloc(size, sizeof(hash_table_t *));
	if (!hash_table->array)
	{
		free(hash_table);
		return (NULL);
	}

	hash_table->size = size;

	return (hash_table);
}
