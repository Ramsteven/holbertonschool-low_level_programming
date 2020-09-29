#include "holberton.h"
#include <stdio.h>

/**
  * _print_rev - printe string in reverse
  * @s : given string
  trlen(str) print value of a string in reverse
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

	for (x = i ; x >= 0; x--)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');		
}
