#include "main.h"

/**
 * alloc_grid - function that returns pointer
 * to two dimensional array of integers.
 * @w: width of grid
 * @h: height of grid
 *
 * Return: pointer or NULL for error
 */
int **alloc_grid(int w, int h)
{
	int **g;
	int i, j;

	if (w < 1 || h < 1)
		return (NULL);
	g = (int **)malloc(sizeof(int *) * h);
	if (g == NULL)
		return (NULL);
	for (i = 0; i < h; i++)
	{
		g[i] = malloc(sizeof(int) * w);
		if  (g[i] == NULL)
		{
			for (i = i - 1; i >= 0; i--)
				free(g[i]);
			free(g);
			return (NULL);
		}
	}
	for (i = 0; i < h; i++)
		for (j = 0; j < w; j++)
			g[i][j] = 0;

	return (g);
}
