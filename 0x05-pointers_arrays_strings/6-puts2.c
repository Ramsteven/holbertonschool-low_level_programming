#include "holberton.h"

/**
  * puts2 - print every other character of a string
  * @str: gives string
  * print every other char of a string
  * Return: no return
  **/
void puts2(char *str)
{
	int i;
	int size = _strlen(str);

	for (i = 0; i < size ; i += 2)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');

}

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
