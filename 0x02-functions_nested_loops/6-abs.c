#include "holberton.h"

/**
  *_abs - check and print sign of a number
  *@n: numeber to get absolute value
  *
  *Return: 1 if n is zero, 0 if n is zero, -1 if n is n is less than zero
  */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else if (n > 0)
	{
		return (n);
	}
	return (0);
}
