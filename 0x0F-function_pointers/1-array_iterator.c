#include "function_pointers.h"

/**
* array_iterator - executes function on each element of array
* @array: pointer to integer array.
* @size: size of array.
* @action: pointer to function
* Return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/*Var to index array*/
	unsigned int index = 0;
	/*If array, size, action are equal*/
	if (array && size && action)
		/*And while index is less than size*/
		while (index < size)
		{
			/*Carry out action at index of array*/
			action(array[index]);
			index++;
		}
}
