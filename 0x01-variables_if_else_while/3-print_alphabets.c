#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * main - File upper.c
 * prints uppercase and lowercase letters
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);

	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);

	putchar('\n');

	return (0);
}
