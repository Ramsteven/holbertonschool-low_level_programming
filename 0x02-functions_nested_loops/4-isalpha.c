#include <ctype.h>
#include "holberton.h"

/**
  *
  *Return file
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
