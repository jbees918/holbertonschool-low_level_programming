#ifndef main_h
#define main_h

/**
 * Main - main.h
 *
 * Description: Header file containing the prototypes
 * for all of the fuhnctions in 0x07. C - Even more pointers, arrays
 * and strings
 */
#include <stddef.h>

int _putchar(char c);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void print_chessboard(char (*a)[8]);
void print_diagsums(int *a, int size);

#endif
