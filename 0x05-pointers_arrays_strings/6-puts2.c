#include "holberton.h"

/**
  * puts2 - print every other character of a string
  * @str: gives string
  * print every other char of a string
  * Return: no return
  **/
void puts2(char *str)
{
	char *string;

	string = str;

	if (*string != '\0')
	{
		for (; *string != '\0' ; string += 2)
		{
			_putchar(*string);
		}
	}
	_putchar('\n');
}
