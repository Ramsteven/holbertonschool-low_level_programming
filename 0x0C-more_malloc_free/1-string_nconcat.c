#include "holberton.h"
#include <stdlib.h>

/**
  *size-return size of a string.
  *@str:gives string.
  *
  *Return: return size of a string.
  **/
int size(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;

	return (i);
}

/**
  *string_nconcat- concatenate s1 with the firts n characters of s2
  *@s1:string one.
  *@s2:string two.
  *@n: amount the charaters of s2 to concatenated
  *Return: NULL if the *Str is null or p if not.
  **/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p = NULL;
	unsigned int i = 0, k = 0, j = 0, l;

	if (!s1)
	{
		i = 0;
		s1 = "";
	}
	else
		i = size(s1);

	if (!s2)
	{
		j = 0;
		s2 = "";
	}
	else
		j = size(s2);

		if (n > j)
			n = j;
		else
			j = n;

	p = malloc(sizeof(char) * (i + j) + 1);

	if (!p)
		return (NULL);

	for (k = 0; k < i; k++)
		p[k] = s1[k];
	if (n > 0)
	{
		for (l = 0; k < n + i; k++, l++)
			p[k] = s2[l];
	}
	p[k] = '\0';

	return (p);
}
