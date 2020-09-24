#include "holberton.h"

/**
  * print_most_numbers - print numbers of 0 to 9 dont print 2 and 4
  * @void: no parameter
  *
  * Return: not return
  **/
void print_most_numbers(void)
{

	int i;

	for (i = '0'; i <= '9'; i++)
	{
		if (i != '4' && i != '2')
		{
			_putchar(i);
		}
	}
		_putchar('\n');
}
