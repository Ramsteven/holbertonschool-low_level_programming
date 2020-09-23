#include <ctype.h>
#include "holberton.h"

/**
  *_isalpha - check if c is a letter
  *
  *Return 1 if c is a letter otherwise 0
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
