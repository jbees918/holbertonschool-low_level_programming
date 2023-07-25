#include "hash_tables.h"

/**
 * key_index - function that finds and returns idx of key in table
 * @key: key that the function searches for
 * @size: size of array in table
 * Return: hash table array idx where kv pair stored
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hashKey, idx;

	hashKey = hash_djb2(key);
	idx = hashKey % size;
	return (idx);
}
