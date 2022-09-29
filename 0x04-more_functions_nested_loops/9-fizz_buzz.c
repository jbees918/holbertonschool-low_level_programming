#include "main.h"
#include <stdlib.h>
/**
 * main - Fizz-Buzz test
 *
 * Return: 0
 */
int main(void)
{
	int n;

	for (n = 1; n <= 100; n++)
	{
		if ((n % 3) == 0 && (n % 5) != 0)
			printf(" Fizz");
		else if ((n % 5) == 0 && (n % 3) != 0)
			printf(" Buzz");
		else if ((n % 3) == 0 && (n % 5) == 0)
			printf(" FizzBuzz");
		else if (n == 1)
			printf("%d", n);
		else
			printf(" %d", n);
	}
	printf("\n");

	return (0);
}
