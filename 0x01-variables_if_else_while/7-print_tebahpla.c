#include <stdio.h>
#include <stdlib.h>
/**
 * main -prints entire lowercase alphabet
 * followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
		putchar(ch);
	putchar('\n');
	return (0);
}
