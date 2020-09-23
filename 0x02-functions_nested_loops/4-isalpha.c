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
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	if (c <= 'z' && c >= 'a')
	{
		return (1);
	}

	return (0);

}
