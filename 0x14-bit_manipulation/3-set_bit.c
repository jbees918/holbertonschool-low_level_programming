#include "main.h"

/**
 * set_bit - function to set value of
 * a bit to 1 at a given index.
 * @n: pointer to the unsigned long int (base 10)
 * @index: base 2 digit index (starting 0 tight to left)
 *
 * Return: 1 for success, -1 for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	*n |= (1 << index);
	return (1);
}
