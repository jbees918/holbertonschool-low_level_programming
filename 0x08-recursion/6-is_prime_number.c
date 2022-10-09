#include "main.h"

int is_prime(int i, int n);
/**
 * is_prime_number - function that returns 1
 * if the input integer is a prime number, otherwise return 0.
 * @n: input integer
 *
 * Return: 1 if prime number, otherwise 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime(n / 2, n));
}

/**
 * is_prime - looks for prime number
 * @n: input integer
 * @i: number
 *
 * Return: 1 if prime number, otherwise 0.
 */
int is_prime(int i, int n)
{
	if (i == 1)
		return (1);

	if (n % i == 0)
		return (0);

	return (is_prime(i - 1, n));
}
