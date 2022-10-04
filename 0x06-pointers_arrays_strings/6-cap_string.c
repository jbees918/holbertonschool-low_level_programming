#include "holberton.h"

/**
 * cap_string - function that capitalizes all words of a string.
 * @p: Variable
 *
 * Return: string with all characters capitalized.
 */
char *cap_string(char *p)
{
	int x;

	for (x = 0; p[x] != '\0'; x++)
	{
		if (p[x] >= 'a' && p[x] <= 'z')
		{
		if (p[x - 1] == ' ' ||
		p[x - 1] == '\t' ||
		p[x - 1] == '\n' ||
		p[x - 1] == ',' ||
		p[x - 1] == ';' ||
		p[x - 1] == '.' ||
		p[x - 1] == '!' ||
		p[x - 1] == '?' ||
		p[x - 1] == '"' ||
		p[x - 1] == '(' ||
		p[x - 1] == ')' ||
		p[x - 1] == '{' ||
		p[x - 1] == '}' ||
		x == 0)
		{
			p[x] = p[x] - 32;
		}
	}
	}
	return (p);
}
