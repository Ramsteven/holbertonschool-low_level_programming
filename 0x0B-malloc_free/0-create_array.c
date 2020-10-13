#include "holberton.h"
#include <stdlib.h>

/**
  *create_array-creat an array and fill this with c
  *@size: size of array
  *@c: char to fill array
  *
  *Return: if size is 0 = NULL otherwise return pointer p
  */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i = 0;

	if (size == 0)
		return (NULL);

	p = malloc(sizeof(char) * size);

	while (i < size)
	{
		*(p + i) = c;
		i++;
	}

	return (p);
}
