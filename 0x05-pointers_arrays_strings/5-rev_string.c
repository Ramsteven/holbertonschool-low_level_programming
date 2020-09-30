#include "holberton.h"
#include <string.h>

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

	l = strlen(s);

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
