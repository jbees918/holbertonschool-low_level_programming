#include "holberton.h"

/**
 * _strncpy - function that copies a string.
 * @src: Source string
 * @dest: Destination string
 * @n: number of chars to copy
 *
 * Return: Char, pointer to dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (src[i])
			dest[i] = src[i];
		else
			break;
	}

	for ( ; i < n; i++)
	{
		while (i < n)
		{
			dest[i] = '\0';
			i++;
		}
	}

	return (dest);
}
