#include "main.h"

/**
 * flip_bits - function to return number of bits you
 * would need to flip to get from one number to another.
 * @n: unsigned long int base 10 (number 1)
 * @m: unsigned long int base 10 (number 2)
 *
 * Return: numbere of bits needed to flip one num to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int count = 0;
	unsigned long int x = n ^ m;

	while (x > 0)
	{
		count++;
		x &= x - 1;
	}
	return (count);
}
