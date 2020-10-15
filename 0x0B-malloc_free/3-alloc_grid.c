#include "holberton.h"
#include <stdlib.h>

/**
  *alloc_grid- concatenate two string.
  *@width: with matrix
  *@height: heigth matrix
  *
  *Return: NULL if had failures o negative number otherwise return NULL
  **/
int **alloc_grid(int width, int height)
{
	int **array;
	int i,j,k;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **) malloc(height * sizeof(int *));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		array[i] = (int *) malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (k = 0; k < i; k++)
				free(array[k]);
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;

	return (array);
}
