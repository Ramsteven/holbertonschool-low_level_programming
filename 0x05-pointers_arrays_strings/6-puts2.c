#include "holberton.h"

/**
  * puts2 - print every other character of a string
  * @str: gives string
  * print every other char of a string
  * Return: no return
  **/
void puts2(char *str)
{
	int len;
	char *string;

	string = str;
	len = _strlen(str);

	if (len != 0)
	{
		for (; *string != '\0' ; string += 2)
		{
			_putchar(*string);
		}
	}
	_putchar('\n');
}

/**
  * _strlen - obtain the length of a string
  *@s: gives string
  *
  * Return: return size of the string
  **/

int _strlen(char *s)
{
	int i = 0;
	char *u = s;

	while (*u != '\0')
	{
		i++;
		u++;
	}
	return (i);
}

