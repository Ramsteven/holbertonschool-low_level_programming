#include "holberton.h"

/**
  * print_rev - printe string in reverse
  * @s : given string
  * print value of a string in reverse
  * Return: no return
  **/
void print_rev(char *s)
{
	int i;
	int x;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	x = i;

	while (x >= 1)
	{
		x--;
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
