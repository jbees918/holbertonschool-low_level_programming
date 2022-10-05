#include "main.h"

/**
* _memset - a function that fills memory with a constant byte
* @s: pointer to a memory area
* @b: the contstant byte
* @n: a number of bytes
* Return: a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
unsigned int j;

for (j = 0; j < n; j++)
s[j] = b;
return (s);
}
