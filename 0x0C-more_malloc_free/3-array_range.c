#include "holberton.h"
#include <stdlib.h>

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

	if (!min || !max)
		return (NULL);
	if (min > max)
	{
		return (NULL);
	}
	else
	{
		for (i = min; i <= max; i++)
			;
	}

	ptr = malloc(i * sizeof(int));

	if (!ptr)
		return (NULL);

	for (k = min, j = 0; k <= max; k++, j++)
	{
		*(ptr + j) = k;
	}
	return (ptr);
}
