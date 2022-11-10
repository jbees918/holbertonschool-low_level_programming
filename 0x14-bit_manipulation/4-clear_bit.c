#include "main.h"

/**
 * clear_bit - function to set the value
 * of a bit to 0 at given index.
 * @n: pointer to unsigned long int (base 10)
 * @index: base 2 digit index (starting 0 right to left)
 *
 * Return: 1 for success, -1 for error
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	*n &= ~(1 << index);
	return (1);
}
