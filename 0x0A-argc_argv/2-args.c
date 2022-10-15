#include "main.h"

/**
 * main - program that prints all arguments it receives.
 * @argc: counts of arguments passed
 * @argv: array of passed arguments
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)

	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
