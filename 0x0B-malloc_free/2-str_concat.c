#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *size-return size of a string.
  *@str:gives string.
  *
  *Return: return size of a string.
  **/
int size(char *str)
{
	int i = 0;

	if (!str)
		return (0);

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
  *str_concat- concatenate two string.
  *@s1:string one.
  *@s2:string two.
  *
  *Return: NULL if the *Str is null or p if not.
  **/
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0;
	int k = 0;
	int j = 0;
	int n;

	i = size(s1);
	j = size(s2);

	p = malloc(sizeof(char) * i + k + 1);

	if (!p)
		return (NULL);

	for (k = 0; k < i; k++)
		p[k] = *(s1 + k);
	for (n = 0; k < j + i; k++, n++)
		p[k] = *(s2 + n);
	p[k] = '\0'
	return (p);
}
