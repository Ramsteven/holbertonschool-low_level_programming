#include "holberton.h"

/**
  *_pow_recursion- the value of x raised to the power of y
  *@x: number to be raised
  *@y: power number
  *Return: the value of x raised to the power of y
  **/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);

	if (y > 0)
		return (x = x * _pow_recursion(x, y - 1));

	return (-1);
}
