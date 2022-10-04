#include "holberton.h"

/**
 * string_toupper - function that changes all lowercase letters
 * of a string to uppercase.
 * @p: pointer to change
 *
 * Return: upper case letters
 */
char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 'a' && p[i] <= 'z')
		{
			p[i] = p[i] - 32;
		}
	}
	return (p);
}
