#include "main.h"

/**
 * get_bit - function to return value
 * of a bit at a given index.
 * @n: unsigned long int
 * @index: base 2 digit index
 *
 * Return: value of bit at index, -1 if error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
	{
		return (-1);
	}
	else if ((1 << index) & n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
