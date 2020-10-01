#include "holberton.h"

/**
  * _strncat- concatenate two strin with n characters of the src
  *@dest: destination string;
  *@src: source string to append
  *@n: numbers of characters
  *Return: return concatenate values
  **/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int x = 0;
	int k;

	while (dest[i] != '\0')
		i++;
	while (dest[x] != '\0')
		x++;

	if (n > x)
		n = x;

	for (k = 0; k < n; k++)
	{
		dest[i + k] = src[k];
	}

	return (dest);
}
