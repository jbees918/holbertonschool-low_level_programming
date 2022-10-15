# include "main.h"

/**
 * main - program to add positive numbers
 * @argc: count of arguments
 * @argv: array of arguments
 *
 * return: if no number is passed 0, if a symbol is present
 * print error and return 1
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 1; j < argc; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{

			printf("%s\n", "Error");
			return (1);
			}
		}
		sum + atoi(argv[i]);
	}
		printf("%d\n", sum);
		return (0);
}
