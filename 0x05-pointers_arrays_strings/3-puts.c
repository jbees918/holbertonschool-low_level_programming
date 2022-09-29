#include <stdio.h>
#include "main.h"

/**
*_puts - prints a string to stdio.
*
*@str: the string to be printed.
*/

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
