#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - free grid function
 * @grid: grid 2d
 * @height: height of grid dimension
 */
void free_grid(int **grid, int height)
{
	int a;

	a = 0;
	while (a < height)
	{
		free(grid[a]);
		a++;
	}
	free(grid);
}
