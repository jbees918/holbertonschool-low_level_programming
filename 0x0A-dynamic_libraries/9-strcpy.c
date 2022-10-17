#include "main.h"

/**
 * *_strcpy- copies string at @src, including (\0),
 * to the buffer pointed to by @dest.
 * @src: string to copy
 * @dest: Where to copy
 *
 * Return: pointer to @dest string
 */
char *_strcpy(char *dest, char *src)
{
	int in = 0;

	while (src[in])
	{
		dest[in] = src[in];
		in++;
	}
	dest[in] = '\0';

	return (dest);
}
