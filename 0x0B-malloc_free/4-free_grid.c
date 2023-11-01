#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * print_grid - prints a gri of integers
 * @grid: address of the 2d grid
 * @height: height of the grid
 *
 * Retur: NULL
 */

void print_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		free(grid[a])
	}

	free(grid);
}
