#include "holberton.h"

/**
  *_puts_recursion- function that print one string
  *@s: string gives
  *
  *Return: not return, only prints the string
  **/
void _puts_recursion(char *s)
{

	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (!*s)
		_putchar('\n');

}
