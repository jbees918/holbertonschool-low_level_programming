#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * linear_search - Search for a value in an array using linear search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of the first occurrence of 'value', or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

   size_t i;
for (i = 0; i < size; i++)
    {
        printf("Value checked array[%lu] = [%d]\n", i, array[i]);
        if (array[i] == value)
            return (int)i;
    }

    return -1; /** Value not found */
}
