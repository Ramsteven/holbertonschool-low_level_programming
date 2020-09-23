#include <ctype.h>
#include "holberton.h"

/**
  *_isalpha - check if c is a letter
  *@c: letter or number to check
  *
  *Return: 1 if c is a letter otherwise 0
  *
  */

int _isalpha(int c)
{
	if (isalpha(c) > 0)
	{
		return (1);
	}

	return (0);

}
