#include "holberton.h"
#include <stdio.h>

/**
  *print_diagsums-  prints the sum of the two diagonals
  *of a square matrix of integers.
  *@a: the array casted to integer
  *@size: size of the array
  *
  *Return: no return only prints the values
  **/
void print_diagsums(int *a, int size)
{
	int i, j = size - 1, add1, add2;

	add1 = 0;
	add2 = 0;

	for (i = 0; i < size; i++, j -= 2, a += size)
	{
		add1 += a[i];
		add2 += a[i + j];
	}
	printf("%d, %d\n", add1, add2);
}
