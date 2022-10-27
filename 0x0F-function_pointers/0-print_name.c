#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
* print_name - prints a name.
* @name: char type popinter to address of name.
* @f: function pointer
* Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
		return;
	f(name);
}
