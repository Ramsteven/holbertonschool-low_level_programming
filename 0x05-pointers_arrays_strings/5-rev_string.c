#include "holberton.h"

/**
  * rev_string - reverse a string
  * @s: gives string
  *
  * Return: no return
  **/
void rev_string(char *s)
{
	int i, l;
	char *beg, *end, ch;

	beg = s;
	end = s;

	l = _strlen(s);

	end += l - 1;

	for (i = 0; i < l / 2; i++)
	{
		ch = *end;
		*end = *beg;
		*beg = ch;
		beg++;
		end--;
	}
}

/**
  * _strlen - obtain the length of a string
  *@s: gives string
  *
  * Return: return size of the string
  **/

int _strlen(char *s)
{
	int i;
	char *u = s;

	while (*u != '\0')
	{
		i++;
		u++;
	}
	return (i);
}
