#include "holberton.h"

/**
  *reverse_array- reverse  an array
  *@a: array
  *@n: length array
  *
  *Return: no return, reverse values of the memory direction
  */
void reverse_array(int *a, int n)
{
	int k = 0;
	int *pointer2 = a + n - 1;

	if (n > 1)
	{

		while (*pointer2 > *a)
		{
			k = *a;
			*a = *pointer2;
			*pointer2 = k;
			pointer2--;
			a++;
		}
	}
}
