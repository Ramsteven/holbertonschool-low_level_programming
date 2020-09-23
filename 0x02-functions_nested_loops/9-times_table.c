#include "holberton.h"

/**
  * times_table - print 9
  *
  * Return: not return
  *
  **/
void times_table(void)
{
	int n;
	int x;

	for (x = 0; x <= 9; x++)
	{
		for (n = 0; n <= 9; n++)
		{
			if ((n * x) <= 9)
			{
				if (n != 0)
				{
					_putchar(' ');
				}
					_putchar((n * x) + '0');

					if (n != 9)
					{
						_putchar(',');
						_putchar(' ');
					}
			}
			else if ((n * x) > 9)
			{
				_putchar(((n * x) / 10) + '0');
				_putchar(((n * x) % 10) + '0');
					if (n != 9)
					{
						_putchar(',');
						_putchar(' ');
					}
			}
		}
		_putchar('\n');
	}
}
