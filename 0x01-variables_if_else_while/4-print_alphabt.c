#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - prints entire alphabet, except q and e
 * lowercase, followed by new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{	char ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	if (ch != 'e' && ch != 'q')
		putchar (ch);
	putchar('\n');
	return (0);
}
