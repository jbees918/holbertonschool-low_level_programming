#include "main.h"

/**
 * free_grid - function that frees two dimensional grid
 * previously created by your alloc_grid function.
 * @grid: grid to free
 * @h: height of grid to clear
 */
void free_grid(int **grid, int h)
{
	for (; h > 0; h--)
	{
		free(grid[h - 1]);
	}
	free(grid);
}
