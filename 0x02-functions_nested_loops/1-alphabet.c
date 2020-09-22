#include "holberton.h"

/**
  * main - check the code for Holberton School students.
  *
  * Return: Always 0.
  */
void print_alphabet(void)
{
	char n;

	for (n = 'z'; n >= 'a'; n--)
		_putchar(n);

	_putchar('\n');
}
