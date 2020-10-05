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
	char *ptr = dest;

	while (n--)
	{
		*dest++ = *src++;
	}
	return (ptr);
}
