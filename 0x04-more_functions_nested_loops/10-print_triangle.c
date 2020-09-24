#include "holberton.h"

/**
  * print_triangle - print a triangle with #
  * @size: define the size of triangle base
  * print of 1 # increase the # for line until the base
  * Return: not return
  **/
void print_triangle(int size)
{
	int x = size;
	int i;

	if (size != 0)
	{
		while (x--)
		{

			for (i = 1; i <= size; i++)
			{
				if (i <= x)
				{
					_putchar(' ');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
