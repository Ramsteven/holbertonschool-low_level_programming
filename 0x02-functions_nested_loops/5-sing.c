#include "holberton"

/**
  * print_sign- print sing of a number
  *
  *Return: 1 when se sign is +, 0 when the number is zero, -1 whe the number is les than 0
  */
int print_sign(int c)
{
	int x;

	if (c > 0)
	{	
		_putchar('+');
		x=1;
	}
	else if(c == 0){
		_putchar('0');
		x=0;
	}
	else
	{
		_putchar('-');
		x=-1;
	}

	return (x);
}
