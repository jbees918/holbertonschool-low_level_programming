#include "main.h"

/**
 * _strlen_recursion - function that returns string length.
 * @s: String
 *
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	int i;

	if (*s != '\0')
	{
		i = 1 + _strlen_recursion(s + 1);
	}
	else
		i = 0;
	return (i);
}
