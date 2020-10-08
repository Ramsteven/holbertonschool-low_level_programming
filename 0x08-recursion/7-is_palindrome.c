#include "holberton.h"
#include <stdio.h>

/**
  *is_palindrome- Write a function that returns the
  *1 if the strind is palindrome
  *@s: numbet to check if its palindrome a string
  *
  *Return: 1 o 0.
  **/
int is_palindrome(char *s)
{
	int i = 0;
	int k = 0;

	while (s[i] != '\0')
		i++;

	if (s == '\0')
		return (1);

	return (helper_palindrome(i - 1, k, s));
}
/**
  *helper_palindrome- function that take value n an increase x
  *@i: decreasing
  *@k: increasing
  *@s: pointer s
  *
  *Return: return 1 it is prime n or 0 otherwise.
  **/
int helper_palindrome(int i, int k, char *s)
{
	if (i == 0)
		return (1);

	if (s[i] != s[k])
		return (0);

	return (helper_palindrome(i - 1, k + 1, s));
}
