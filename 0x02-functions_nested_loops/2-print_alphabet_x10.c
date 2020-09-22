#include "holberton.h"
/**
  * print_aphabet_x10 print alphabet 10 times
  *
  * print a to z with new line in the end
  */

void print_alphabet_x10(void)
{
	char c;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{

			_putchar(c);
		}
		_putchar('\n');

	}

}
