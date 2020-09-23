#include "holberton.h"

/**
  * _abs - check and print sign of a numb
  * @n: numeber to get absolute value
  *
  * Return: 1 if n is zero, 0 if n is zero, -1 if n is n is less than zero
  **/
int _abs(int n)
{

	if (n < 0)
	{
		return (n * -1);
	}
	else if (n > 0)
	{
		return (n);
	}
		return (0);
}


/**
  *print_last_digit - print the las digit of a number
  *@n: number to get absolute value
  *
  *Return: the value the las digit
  */
int print_last_digit(int n)
{
	int last;

	last = _abs((n % 10));
	_putchar(last + '0');
	return (last);
}
