#include "holberton.h"

/**
 * reverse_array - function that reverses the content of
 * an array of integers.
 * @a: An array of integers
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = j;
	}
}
