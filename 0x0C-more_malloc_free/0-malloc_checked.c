#include "holberton.h"
#include <stdlib.h>
/**
  *malloc_checked- Write a function that allocates memory using malloc
  *@b:the size of memory to allocates
  *
  *Return: Pointer with the direction on memory
  **/
void *malloc_checked(unsigned int b)
{
	void *p;

	p = malloc(b);

	if (!p)
		exit(98);

	return (p);
}
