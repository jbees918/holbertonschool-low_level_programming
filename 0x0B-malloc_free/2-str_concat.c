#include "main.h"

/**
 * str_concat - function that concatenates two strings.
 * @s1: string to concatenate
 * @s2: other string to concatenate
 *
 * Return: pointer to new string success, or NULL for Error
 */
char *str_concat(char *s1, char *s2)
{
	char *s3;
	int L1 = 0, L2 = 0, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[L1])
		L1++;
	while (s2[L2])
		L2++;

	s3 = malloc(sizeof(char) * (L1 + L2 + 1));

	if (s3 == NULL)
		return (NULL);

	for (i = 0; i < L1; i++)
		s3[i] = s1[i];
	for (i = 0; i < L2; i++)
		s3[i + L1] = s2[i];
	s3[L1 + L2 + 1] = '\0';

	return (s3);



}
