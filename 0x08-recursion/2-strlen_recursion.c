#include "holberton.h"

/**
  *_strlen_recursion- function that print one string in reverse
  *@s:gives string
  *
  *Return: return the length of a string
  **/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
