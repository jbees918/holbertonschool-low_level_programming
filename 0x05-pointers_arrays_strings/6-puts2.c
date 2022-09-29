#include "main.h"

/**
 * puts2 - every other character of a string, starting
 * with the first character, followed by new line.
 * @str: String
 */
void puts2(char *str)
{
	int i = 0;

	while (*(str + i))
	{
		_putchar(*(str + i));
		i++;

		if (*(str + i) == '\0')
			break;
		i++;

	}

	_putchar('\n');
}
