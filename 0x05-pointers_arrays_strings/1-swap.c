#include "holberton.h"
#include <stdio.h>

/**
  * swap_int - swap the value of two integers
  * @a: pointer integer a
  * @b: pointer integer b
  *
  * Return: no return
  **/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}
