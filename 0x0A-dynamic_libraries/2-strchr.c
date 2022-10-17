#include "main.h"
#include <stddef.h>

/**
 * _strchr - function that locates a char within string.
 * @c: character being looked for
 * @s: source string
 *
 * Return: pointer to the first occurrence of c in the string
 * s, or NULL if not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != c && *s != '\0')
	{
		s++;
	}
	if (*s == c)
		return (s);
	else
		return (NULL);
}
