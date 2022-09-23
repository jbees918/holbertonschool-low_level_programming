#include "main.h"
/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int N, M, T;

	for (N = 0; N <= 9; N++)
	{
		_putchar('0');
		for (M = 1; M <= 9; M++)
		{
		_putchar(',');
		_putchar(' ');

		T = N * M;
	if (T <= 9)
		_putchar(' ');
	else
		_putchar((T / 10) + '0');
	_putchar((T % 10) + '0');
	}
	_putchar('\n');
	}
}
