#include "holberton.h"

/**
  *_print_rev_recursion- function that print one string in reverse
  *@s:gives string
  *
  *Return: not return, only prints the string
  **/
void _print_rev_recursion(char *s)
{

	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
