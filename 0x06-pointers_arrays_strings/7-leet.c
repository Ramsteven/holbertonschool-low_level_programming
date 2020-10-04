#include "holberton.h"

/**
  * leet - function than encodes a string to 1337
  * @s: gives string
  *
  * Return: change values betbeen two arrays if the letter is aA ,eE, oO, tT, lL
  **/
char *leet(char *s)
{
	char C[] = "AEOTL";
	char N[] = "43071";

	char  *c, *n;
	int i, k;

	c = C;
	n = N;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (k = 0; C[k] != '\0'; k++)
		{
			if (c[k] == s[i] || (c[k] + 32) == s[i])
			{
				s[i] = n[k];
				break;
			}
		}
	}
	return (s);
}
