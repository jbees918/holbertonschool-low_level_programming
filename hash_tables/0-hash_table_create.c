#include "hash_tables.h"

/**
 * hash_table_create - function that creates new hash_table_t
 * @size: size of has table... num of cols/rows dep on POV
 * Return: pointer to new hash table or NULL if bad magic
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *newTable;
	unsigned long int i;

	/* malloc space for newTable */
	newTable = malloc(sizeof(hash_table_t));
	if (!(newTable))
	{
		return (NULL);
	}
	/* malloc space for lls AKA arrays win newTable */
	newTable->array = malloc(sizeof(hash_node_t *) * size);
	if (!(newTable->array))
	{
		free(newTable);
		return (NULL);
	}
	/* fill newly mallocd space with placeholders */
	newTable->size = size;
	for (i = 0; i < size; i++)
	{
		newTable->array[i] = '\0';
	}
	return (newTable);
}
