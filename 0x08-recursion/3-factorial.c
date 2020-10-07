#include "holberton.h"

/**
  *factorial- function that print one string in reverse
  *@n:given number
  *
  *Return: return the factorial number
  **/
int factorial(int n)
{
	if (n == 0)
		return (1);

	if (n > 0)
		return (n = n * factorial(n - 1));


	return (-1);
}
