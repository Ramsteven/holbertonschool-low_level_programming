#include "holberton.h"

/**
  * print_line - print character _ n times.
  * @n: parameter limit of prints of n
  *
  * Return: not return
  **/
void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
