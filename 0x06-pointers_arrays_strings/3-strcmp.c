#include "holberton.h"
#include <stdio.h>
/**
  *_strcmp - function that compare characters between two strings.
  *@s1: string1
  *@s2: string2
  *
  *Return: the integner of s1-s2 characters
  **/
int _strcmp(char *s1, char *s2)
{
	int i;
	int x = 0;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		if (s1[i] == s2[i])
		{
			i++;
		}
		else if (s1[i] != s2[i])
		{

			if (s1[i] > s2[i])
			{
				x = s1[i] - s2[i];
				return (x);
			}

			else if (s1[i] < s2[i])
			{
				x = s1[i] - s2[i];
				return (x);
			}
		}
	}
	return (x);
}
