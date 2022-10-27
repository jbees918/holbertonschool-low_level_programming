#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H

#include <stdio.h>
#include <stdlib.h>

/*Standard print char function*/
int _putchar(char c);
/*Function prints a name*/
void print_name(char *name, void (*f)(char *));
/*Executes a function given as param*/
void array_iterator(int *array, size_t size, void (*action)(int));
/*Function searches for an integer*/
int int_index(int *array, int size, int (*cmp)(int));


#endif
