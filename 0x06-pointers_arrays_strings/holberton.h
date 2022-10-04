#ifndef holberton_h
#define holberton_h

/**
 * holberton - holberton.h
 *
 * Description: header file containing the prototypes
 * for all the functions in 0x06. C - more pointers, arrays
 * and strings.
 */

#include <stdio.h>
#include <ctype.h>

char *cap_string(char *);
char *string_toupper(char *);
void reverse_array(int *a, int n);
int _strcmp(char *s1, char *s2);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
int _putchar(char c);

#endif
