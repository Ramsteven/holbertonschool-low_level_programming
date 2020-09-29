#include "holberton.h"

/**
  * print_number - print a int without printf using _putchar function
  * @n: integer for print
  * print integer
  * Return: not return
  **/
void print_number(int n)
{
	unsigned int x;


	if (n >= 0)
	{
		if (n / 10 != 0)
		{
			print_number(n / 10);
		}
		_putchar(n % 10 + '0');
	}
	else
	{
		x = -n;
		_putchar('-');
		
		while( x / 10 != 0)
		{
			if( x >= 0)
			{
				x = x / 10;	
			}	
			_putchar( x % 10 + '0');
		}
		




	}
}
