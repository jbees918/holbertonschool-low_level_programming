#include "main.h"

/**
 * print_numbers - Prints numbers 0 to 9
 * followed by new line
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
