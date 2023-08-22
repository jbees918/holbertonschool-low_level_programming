#include "search_algos.h"

/**
 * arrayPrinter - prints an array
 * @start: start of array
 * @end: end of array
 * @array: pointer to the array
 */


void arrayPrinter(int *array, int start, int end)
{
	int i;

	printf("Searching in array: ");
	for (i = start; i < end; i++)
		printf("%d, ", array[i]);
	printf("%d\n", array[end]);
}

/**
 * binary_search - search in binary
 * @array: the array
 * @size: size of array
 * @value: what it needs to find
 * Return: index of location or -1 if not present
 */

int binary_search(int *array, size_t size, int value)
{
	int mid, left, right, RETURN_VALUE = -1;
	int *temp = array;

	if (array)
	{
		left = 0, right = ((int)size - 1);
		arrayPrinter(temp, left, right);
		while (left <= right)
		{
			mid = (left + right) / 2;
			if (value == temp[mid])
				{
				RETURN_VALUE = mid;
				break;
				}
			if (value > temp[mid])
				left = mid + 1;
			if (value < temp[mid])
				right = mid - 1;
			if (left <= right)
				arrayPrinter(temp, left, right);
		}
	}
	return (RETURN_VALUE);
}
