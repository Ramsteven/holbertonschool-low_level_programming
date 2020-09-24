#include "holberton.h"

/**
  * more_numbers- print numbers of 1 to 14, 10 times.
  * @void: not parameter
  *
  * Return: not return
  **/
void more_numbers(void)
{
	int i;
	int x;

	for (x = 0; x <= 10; x++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar((i / 10) + '0');
			}
				_putchar((i % 10) + '0');


		}
		_putchar('\n');
	}
}

