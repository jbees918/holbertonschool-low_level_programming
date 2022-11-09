#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: points to string of 0 and 1 chars
 * Return: converted number, or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int val = 0;
	int i = 0;

	if (b == NULL)
		return (0);

	while (b[i] == 48 || b[i] == 49)
	{
		val <<= 1;
		val += b[i] - '0';
		i++;
		if (b[i] >= '2')
		{
			return (0);
		}
	}
	return (val);
}
