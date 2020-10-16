#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *array_range- Write a function that creates an array of integers.
  *@min: integer less
  *@max: integer greatest
  *
  *Return: Null if faill or pointer if its sucessfull
  **/
int *array_range(int min, int max)
{
	int *ptr;
	int i, j, k;

	if (min > max)
	{
		return (NULL);
	}
	
	i = max - min + 1;

	ptr = malloc((i) * sizeof(int));

	if (!ptr)
		return (NULL);

	for (k = min, j = 0; k <= max; k++, j++)
	{
		*(ptr + j) = k;
	}
	return (ptr);
}
