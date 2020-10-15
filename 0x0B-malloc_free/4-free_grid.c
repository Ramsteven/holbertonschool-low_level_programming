#include "holberton.h"
#include <stdlib.h>

/**
  *free_grid-Write a function that frees a 2 dimensional grid.
  *@grid: two dimensional array
  *@height: amount of rows
  *
  *Return: nothing
  */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}
