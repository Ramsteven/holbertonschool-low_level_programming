#include "holberton.h"

/**
  * _strcpy: function that copies the string pointed to by src, including '\0'
  *@dest: pointer destiny
  *@src : gives string
  *Return: pointer destiny cp src
  **/
char *_strcpy(char *dest, char *src)
{
	int n;
	int i;

	n = _strlen(src);

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

/**
  * _strlen - returns the length of a string
  * @s: string s
  * Return: length of string
  */

int _strlen(char *s)
{
	int i;
	char *u = s;

	for (i = 0; *u != '\0'; i++)
	{
		u++;
	}

	return (i);
}
