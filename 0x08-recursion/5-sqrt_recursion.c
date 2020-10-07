#include "holberton.h"

/**
  *_sqrt_recursion- Write a function that returns the
  *natural square root of a num  *ber.
  *@n: number to be square rooot
  *
  *Return: square root a number if dont have square root
  * return -1.
  **/
int _sqrt_recursion(int n)
{
	int i;

	if (n == 1)
		return (1);

	i = helper(1, n);
	return (i);
}
/**
  *helper- function that take value n an increase x
  *@x: increasing
  *@n: number to get the square root
  *
  *Return: return x+1 until x*x = n
  **/
int helper(int x, int n)
{
	if (x * x == n)
		return (x);
	if (n > 0 && x * x < n)
		return  (helper(x + 1, n));
	return (-1);
}
