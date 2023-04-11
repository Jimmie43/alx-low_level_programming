#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * free_grid - frees a 2D grid
  * @height: height of grid
  * @grid: adress of the 2D grid
  * Return: nothing
  */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
