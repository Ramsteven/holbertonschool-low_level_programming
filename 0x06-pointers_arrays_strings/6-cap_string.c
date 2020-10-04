#include "holberton.h"

/**
  *cap_string - capitalizate the one string
  *@n: gives string
  *
  *Return: return the string with capitalization
  **/
char *cap_string(char *n)
{
	int i = 0;

	for (; n[i] != '\0'; i++)
	{

		if (n[0] >= 'a' && n[0] <= 'z')
			n[0] = n[0] - 32;



		if ((n[i] == ' ' || n[i] ==  '\n' || n[i] == '\t'
		|| n[i] == ',' || n[i] == ';' || n[i] == '.'
		|| n[i] == '!' || n[i] == '?' || n[i] == '"'
		|| n[i] == '(' || n[i] == ')' || n[i] == '{'
		|| n[i] == '}') && n[i + 1] >= 'a'
		&& n[i + 1] <= 'z')
		{
			n[i + 1] = n[i + 1] - 32;
		}
	}
	return (n);
}
