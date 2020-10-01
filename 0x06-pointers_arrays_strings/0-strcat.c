#include "holberton.h"
/**
  *_strcat - function that concatenate two strings
  *@dest: the main string
  *@src: the string to append
  *
  *Return: the concatenate of dest + src
  **/
char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}
