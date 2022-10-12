#include "main.h"

/**
 * _strcmp - function that compares two strings.
 * @s1: string one
 * @s2: string two
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int compare = 0;

	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	compare = *s1 - *s2;

	return (compare);
}
