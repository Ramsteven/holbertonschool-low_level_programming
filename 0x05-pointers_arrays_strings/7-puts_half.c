#include "holberton.h"

/**
  * puts_half - print half of string
  * @str: gives string
  * print from the half character
  * Return: no return
  **/
void puts_half(char *str)
{
	int i;
	int size = _strlen(str);

	if (size % 2 == 0 && size != 0)
	{
		for (i = ((size - 1) / 2) + 1; i < size ; i++)
		{
			_putchar(*(str + i));
		}
	}
	else
	{
		for (i = size / 2; i < size ; i++)
		{
			_putchar(*(str + i));
		}
	}
	_putchar('\n');
}

/**
  * _strlen - returns the length of a string
  * @s: string s
  * Return: length of string
  */

int _strlen(char *s)
{
	int i;
	char *u = s;

	for (i = 0; *u != '\0'; i++)
	{
		u++;
	}

	return (i);
}
