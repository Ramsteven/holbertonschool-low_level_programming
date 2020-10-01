#include "holberton.h"

/**
  * _strcpy- function that copies the string pointed to by src, including '\0'
  *@dest: pointer destiny
  *@src : gives string
  *Return: pointer destiny cp src
  **/
char *_strcpy(char *dest, char *src)
{
	char *cc = dest;

	while (*src)
		*dest++ = *src++;
	*dest = 0;
	return (cc);
}
