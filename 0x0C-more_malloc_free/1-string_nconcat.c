#include "main.h"

/**
 * string_nconcat - function that concatenates two strings.
 * @s1: string one
 * @s2: string two
 * @n: number of characters
 *
 * Return: pointer to new memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *i, *dummy;
	unsigned int j, len1 = 0, len2 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len1])
		len1++;

	while (s2[len2])
		len2++;

	len2 = ((n >= len2) ? len2 : n);

	i = malloc(sizeof(char) * (len1 + len2 + 1));

	if (i == NULL)
		return (NULL);

	for (j = 0; j < len1; j++)
	{
		i[j] = s1[j];
	}
	for (j = 0; j < len2; j++)
	{
		i[j + len1] = s2[j];
	}
	i[len1 + j] = '\0';

	dummy = malloc(5);
	free(dummy);

	return (i);


}
