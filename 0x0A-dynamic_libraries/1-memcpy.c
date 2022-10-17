#include "main.h"

/**
 * _memcpy - function to copy memory area.
 * @src: source memory area
 * @dest: destination memory area
 * @n: number of bytes to copy
 *
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j;

	for (j = 0; j < n; j++)
	dest[j] = src[j];

	return (dest);
}
