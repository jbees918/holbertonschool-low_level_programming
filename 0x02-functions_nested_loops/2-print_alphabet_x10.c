#include "main.h"

/**
 * print_alphabet_x10 - prints lowercase alphabet ten times
 * followed by new line
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int N;
	char L;

	N = 0;

	while (N <= 9)
	{
		for (L = 'a'; L <= 'z'; L++)
			_putchar(L);
		_putchar('\n');
		N++;
	}
}
