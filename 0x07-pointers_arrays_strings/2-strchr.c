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
	char *p;

	p = s;

	while (*p)
	{
		if (*p == c)
			return (p);
		p++;

		if (!p)
			return ('\0');
	}

	return ('\0');
}
