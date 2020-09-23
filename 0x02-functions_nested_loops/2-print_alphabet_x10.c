#include "holberton.h"

/**
  * print_aphabet_x10- print alphabet 10 times
  * @void: nothing file specific
  *
  * Return: not return
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
