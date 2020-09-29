#include "holberton.h"
#include <stdio.h>

/**
  * _puts - return the len of the string using pointers
  * @str : given string
  * print value of a string
  * Return: no return
  **/
void _puts(char *str)
{

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}

	if (*str == '\0')
	{
		_putchar('\n');
	}
}
