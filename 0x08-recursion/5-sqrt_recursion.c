#include "main.h"

int sqrt2(int i, int j);

/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number.
 * @n: number integer
 *
 * Return: if @n doesn't have a natural square root return -1.
 */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));

}

/**
 * sqrt2 - makes possible to evaluate 1 to n
 * @i: same number as n
 * @j: number that iterates from 1 to n
 *
 * Return: 1 success
 */
int sqrt2(int i, int j)
{
	if (j * j == i)
		return (j);
	else if (j * j > i)
		return (-1);
	return (sqrt2(i, j + 1));
}
