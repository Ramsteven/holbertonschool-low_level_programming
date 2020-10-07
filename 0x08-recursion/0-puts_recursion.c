#include "holberton.h"

/**
  *_puts_recursion- function that print one string
  *@s: string gives
  *
  *Return: not return, only prints the string
  **/
void _puts_recursion(char *s)
{

	while (*s)
	{
		_putchar(*s)
		s++;
	}

	_putchar('\n');
}
