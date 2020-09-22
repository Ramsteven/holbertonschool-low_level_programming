#include "holberton.h"

/**
  *print_sign- check and print sign of a number
  *
  *Return: 1 if n is zero, 0 if n is zero, -1 if n is n is less than zero
  */
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		_putchar('+');
		x = 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		x = 0;
	}
	else
	{
		_putchar('-');
		x = -1;
	}
	return (x);
}
