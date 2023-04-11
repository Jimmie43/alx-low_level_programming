#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
  * alloc_grid - allocates grid
  * @height: height integer
  * @width: width integer
  * Return: pointer to a 2d array of integer
  */

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **b;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	b = malloc(sizeof(int *) * height);
	if (b == NULL)
	{
		free(b);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		b[i] = malloc(sizeof(int) * width);
		if (b[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(b[j]);
			}
			free(b);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			b[k][l] = 0;
		}
	}
	return (b);
}
