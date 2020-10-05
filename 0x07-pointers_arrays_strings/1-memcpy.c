#include "holberton.h"

/**
  *_memcpy- function that copies memory specific area.
  *@dest: destination pointer
  *@src: array that will copy
  *@n: copy n times
  *
  *Return: pointer with the new values
  **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char temp;

	for (i = 0; i < n; i++)
	{
		temp  = src[i];
		*dest = temp;
		dest++;
	}

	return (dest);
}
