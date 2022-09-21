#include <stdio.h>
/**
 * main - prints zero through nine
 * followed by new line
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int N;

	for (N = '0'; N <= '9'; N++)
		putchar (N);
	putchar ('\n');
	return (0);
}
