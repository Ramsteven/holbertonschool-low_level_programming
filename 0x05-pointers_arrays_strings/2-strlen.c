#include "holberton.h"
#include <string.h>

/**
  * _strlen - return the len of the string using pointers
  * @s : given string
  *
  * Return: return the # of the char of a string
  **/
int _strlen(char *s)
{
	int i;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	return (i);
}
