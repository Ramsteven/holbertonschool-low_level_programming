#include "holberton.h"

/**
  * print_numbers - print numbers of 0 to 9 
  * @void: no parameter
  *
  * Return: not return 
  **/
void print_numbers(void)
{

	int i;
	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
		_putchar('\n');
}
