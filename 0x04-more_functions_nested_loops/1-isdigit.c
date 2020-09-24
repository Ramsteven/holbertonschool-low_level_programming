#include "holberton.h"

/**
  * _isdigit - check c between 0 and 9 if return 1 if yes otherwise is 0
  * @c: parameter integer
  *
  * Return: 1 o 0
  **/
int _isdigit(int c)
{
	if (c <= '9' && c >= '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
