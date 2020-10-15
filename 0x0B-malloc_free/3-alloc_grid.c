#include "holberton.h"
#include <stdlib.h>

/**
  *size-return size of a string.
  *@str:gives string.
  *
  *Return: return size of a string.
  **/
int size(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}


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
	int i;
	int j;

	if (width < 1 || height < 1)
		return (NULL);

	array = malloc(height * sizeof(int *));

	if (array == NULL)
	{
		free(array);
		return (NULL);

	}

	for (i = 0; i < width; i++)
	{
		array[i] = malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			for (i = 0; i < width; i++)
				free(array[i]);
			free(array);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			array[i][j] = 0;

	return (array);
}
