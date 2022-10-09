#include "main.h"

/**
 * factorial - function that gives the factorial of a number.
 * @n: number
 *
 * Return: If n is lower than 0 return -1 to indicate an error.
 */
int factorial(int n)
{
	if (n < 0)
	return (-1);


	if (n == 0)
	return (1);

	return (n * factorial(n - 1));
}
