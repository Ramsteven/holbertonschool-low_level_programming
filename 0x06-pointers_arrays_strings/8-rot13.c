#include "holberton.h"

/**
  * rot13- encodes to rot13
  * @s: gives string
  *
  * Return: encodes rot13
  **/
char *rot13(char *s)
{
	int i, k;

	for (i = 0; s[i] != '\0'; i++)
	{

		for (k = 0; k != 1 && ((s[i] >= 'a' && s[i] <= 'z')
		|| (s[i] >= 'A' && s[i] <= 'Z')); k++)
		{
			if ((((s[i] + 13) >= 'a' && (s[i] + 13) <= 'z') && (s[i] < 'T'
			|| s[i] >= 'a')) || (((s[i] + 13) >= 'A' && (s[i] + 13)  <= 'Z')))
			{
				s[i] = s[i] + 13;
				break;
			}
				s[i] = s[i] - 13;
		}
	}
	return (s);
}
