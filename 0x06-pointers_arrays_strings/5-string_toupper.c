#include "holberton.h"

/**
  * string_toupper - change lower case to uppercase
  * @n: string to be changed
  *
  * Return: string only with uppercase
  *
  **/
char *string_toupper(char *n)
{
	int x;

	for (x = 0; n[x] != '\0'; x++)
		if (n[x] >= 'a' && n[x] <= 'z')
			n[x] = n[x] - 32;

	return (n);
}
