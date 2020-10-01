#include "holberton.h"
#include <stdio.h>

/**
  * print_array - print array with the max elements to print
  * @a: pointer array
  * @n: is a number of elements of the array yo be printed
  *
  * Return: no return
  **/
void print_array(int *a, int n)
{
	int i;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);

			if (i == n - 1)
			{
				printf("\n");
			}

			else if (i != n - 1)
			{
				printf(", ");
			}
		}
	}
	else
	{
		printf("\n");
	}
}
