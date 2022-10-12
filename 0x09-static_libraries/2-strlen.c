#include "main.h"

/**
 * _strlen - function that returns the length of a string.
 * @s: variable
 * Return: 0
 */
int _strlen(char *s)
{
	int leng;

	for (leng = 0; *s != '\0'; s++)
	{
		leng++;
	}

	return (leng);
}
