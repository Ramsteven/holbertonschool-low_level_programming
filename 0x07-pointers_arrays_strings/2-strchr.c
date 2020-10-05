#include "holberton.h"

/**
  *_strchr- locates a character in a string
  *@s: gives string
  *@c: character to be locates
  *
  *Return: return no if no locates return pointer when locates
  **/
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s-1);
		s++;

		if (!s)
			return '\0';
	}

	return ('\0');
}
