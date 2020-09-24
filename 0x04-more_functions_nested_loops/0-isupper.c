#include "holberton.h"
/**
  * _isupper- check c is a upper character if its return 1 otherwise return 0
  *@c: character c
  *
  * Return: return 1 if is a uppercase character otherwise 0
  **/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


