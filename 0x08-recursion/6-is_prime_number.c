#include "holberton.h"

/**
  *is_prime_number- Write a function that returns the
  *1 if the number is prime or 0 otherwise
  *@n: number to be square rooot
  *
  *Return: 1 o 0.
  **/
int is_prime_number(int n)
{
	int i;

	if (n == 1 || n < 0)
		return (0);

	i = helper_prime(1, n);
	return (i);
}
/**
  *helper_prime- function that take value n an increase x
  *@x: increasing
  *@n: number to get the square root
  *
  *Return: return 1 it is prime n or 0 otherwise.
  **/
int helper_prime(int x, int n)
{
	if (n % x == 0 && x != 1 && x < n)
		return (0);

	if (x < n)
		return (helper_prime(x + 1, n));

	return (1);
}
