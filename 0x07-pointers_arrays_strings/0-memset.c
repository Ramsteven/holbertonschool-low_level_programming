#include "holberton.h"
/**
  * _memset- fill memoty with a constant byte 
  *@s: pointer of the array
  *@b: char to fill
  *@n: fill n times
  *
  *Return: return pointer to the memory area s
  **/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n-1; i++)
	{
		s[i] = b;
	}
	return (s);
}
