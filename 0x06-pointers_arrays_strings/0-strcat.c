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
	int i = 0;
	int k;

	while (dest[i] != '\0')
	{
		i++;
	}


	for (k = 0; src[k] != '\0'; k++)
	{
		dest[i + k] = src[k];
	}

	return (dest);
}
