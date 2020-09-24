#include "holberton.h"

/**
  * print_square - create a square with a size
  * @size: integer than assigns a size of the square
  *
  * Return: no return
  **/
void print_square(int size)
{
	int n, x;

	if (size > 0)
	{
		for (n = size; n > 0; n--)
		{
			for (x = size; x > 0; x--)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
