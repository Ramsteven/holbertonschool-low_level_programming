#include "holberton.h"

/**
  *_strspn- funtcion scanned the character of accept in s
  *@s: string to be scanned
  *@accept: string containing the characters to march
  *
  *Return: return of numbers of characters in the initial segment of str1
  *wich consist only of characters from str2
  **/
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int z;
	unsigned int len = 0;

	while (*s)
	{
		z = 0;

		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				len++;
				  z++;
			}
		}

		if (z == 0)
		{
			return (len);
		}
		else
			s++;
	}
	return (0);
}
