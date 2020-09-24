#include "holberton.h"

/**
  * print_diagonal - print character _ n times.
  * @n: parameter limit of prints of n
  *
  * Return: not return
  **/
void print_diagonal(int n)
{
	int i;
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else if (n > 0)
	{
		for (i = 0; i <= n - 1; i++)
		{
			if (n > 0)
			{
				for (x = 0; x <= i; x++)
				{
					_putchar(x < i ? ' ' : 92);
				}
				_putchar('\n');
			}
		}
	}
}
