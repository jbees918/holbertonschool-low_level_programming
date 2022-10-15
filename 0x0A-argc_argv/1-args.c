#include "main.h"

/**
 * main - program that prints the number of arguments passed.
 * @argc: count of arguments passed
 * @argv: array of passed arguments
 *
 * Return: 0
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		sum += 1;
	}
	printf("%d\n", sum);

	return (0);
}
