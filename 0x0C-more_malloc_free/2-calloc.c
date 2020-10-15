#include "holberton.h"
#include <stdlib.h>

/**
  *_calloc-Write a function that allocates memory for an array, using malloc.
  *@nmemb: amount of elements
  *@size: size of each element
  *
  *Return: Null if faill or pointer if its sucessfull
  **/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (!nmemb || !size)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (!ptr)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
	{
		*(ptr + i) = 0;
	}
	return (ptr);
}
