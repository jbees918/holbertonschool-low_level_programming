#include "main.h"

/**
 * main - program that multiplies two numbers.
 *@argc: count of arguments passed
 * @argv: array of passed arguments
 *
 * return 0 for success, 1 for error
 */
int main(int argc, char *argv[])
{
	int i, mul;

	if (argc == 3)
	{
		for (i = 1; 1 < argc; i++)
		{
			mul = (atoi(argv[1])) * (atoi(argv[2]));
		}
		printf("%d\n", mul);
		return (0);
	}
	else
	{
		printf("%s\n", "Error");
		return (1);
	}
}
