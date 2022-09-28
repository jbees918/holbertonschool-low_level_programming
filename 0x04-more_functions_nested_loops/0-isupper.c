#include "main.h"

/**
 * _isupper - looks for upper case characters
 * @c: variable
 *
 * Return: 1 if c is uppercase, else 0
 */
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);
	else
		return (0);
}
