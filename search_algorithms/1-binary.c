#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 * binary_search - Search for a value in a sorted array using binary search.
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: Value to search for.
 *
 * Return: Index of 'value' in 'array', or -1 if not found.
 */
int binary_search(int *array, size_t size, int value)
{
    if (array == NULL)
        return -1;

    int left = 0;
    int right = (int)size - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        printf("Searching in array: ");
        for (int i = left; i <= right; i++)
        {
            if (i > left)
                printf(", ");
            printf("%d",
