#include "function_pointers.h"

/**
* int_index - searches for an integer.
* @array: array to search.
* @size: size of array.
* @cmp: point to function.
* Return: index on first non 0 return,
*	  -1 if no mtch found,
*	  size if negative.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (array && cmp)
	{
		for (index = 0; index < size; index++)
		{
			if (cmp(array[index]) != 0)
				return (index);
		}
	}
	return (-1);
}
