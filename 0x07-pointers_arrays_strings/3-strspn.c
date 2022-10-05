#include "main.h"
#include <stddef.h>

/**
 * _strspn - function that gets length of prefix substring.
 * @s: source string
 * @accept: string containg characters to match
 *
 * Return: number of bytes in the initial segment s, which
 * consist only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);
	}
	return (c);
}
