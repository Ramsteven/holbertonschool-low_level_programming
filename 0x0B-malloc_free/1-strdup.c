#include "holberton.h"
#include <stdlib.h>

/**
  *_strdup-Write a function that returns a pointer to a newly allocated space.
  *@str: string for save inside pointer
  *
  *Return: NULL if the *Str is null or p if not
  **/
char *_strdup(char *str)
{
	char *p;
	int i = 0;
	int k = 0;

	if (!str)
		return (NULL);
	while (str[i] != '\0')
		i++;

	p = malloc(sizeof(char) * i + 1);

	if (!p)
		return (NULL);

	for (k = 0; k < i; k++)
		p[k] = *(str + k);

	return (p);
}
