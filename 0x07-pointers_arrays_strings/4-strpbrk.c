#include "holberton.h"

/**
  *_strpbrk- find match a character with s and accept
  *@s: gives pointer
  *@accept: string to march
  *i
  *Return: return a pointer to the character in s1 that matches one of the
  *character in s that matches one of character in s2, else return NULL
  **/
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;

	while (*s)
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}

	return (0);
}
