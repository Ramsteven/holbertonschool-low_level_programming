#include "holberton.h"

/**
  * jack_bauer- print the hours of 00:00 to 23:59
  *
  * Return: No return
  */
void jack_bauer(void)
{
	int i1, i2;

	for (i1 = 0; i1 <= 23; i1++)
	{
		for (i2 = 0; i2 <= 59; i2++)
		{
			_putchar((i1 / 10) + '0');
			_putchar((i1 % 10) + '0');
			_putchar(':');
			_putchar((i2 / 10) + '0');
			_putchar((i2 % 10) + '0');
			_putchar('\n');
		}
	}
}
