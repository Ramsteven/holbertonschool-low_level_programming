#include "holberton.h"
#include <stdio.h>
/**
  *print_to_98- print the numberts up to 98
  *@n: start integer
  *
  *Return: not return
  **/
void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else if (n < 98)
	{
		for (i = n; i <= 98; i++)
		{
			printf("%d", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		i = n;
		printf("%d", i);
	}
	putchar('\n');
}
