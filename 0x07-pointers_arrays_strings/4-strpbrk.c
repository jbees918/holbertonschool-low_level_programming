#include "main.h"
#include <stddef.h>

/**
 * _strpbrk -  function that searches a string for any
 * of a set of bytes.
 * @s: string to search
 * @accept: string of bytes to search
 *
 * Return: pointer to the bytes in s that matches one of the
 * bytes in accept, or NULL if no byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}

	return (NULL);
}
