#include "main.h"
/**
 *print_diagonal - print diagonal line using \.
 *@n: number of \ characters or length of line.
 *
 */
void print_diagonal(int n)
{
	int num, space;

	if (n > 0)
	{
		for (num = 0; num < n; num++)
		{
			for (space = 0; space < num; space++)
				_putchar(' ');
			_putchar('\\');

			if (num == n - 1)
				continue;

			_putchar('\n');
		}
	}
	_putchar('\n');
}
