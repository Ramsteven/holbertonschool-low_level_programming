#include"holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *main- function that add the numbers received
  *@argc: the numbers of attributes received
  *@argv: array with the attributes recivied
  *prints: print result of the add or Error if
  *the argument received dont is digit
  *Return: 0 if all its ok otherwise return 1
  **/

int main(int argc, char *argv[])
{
	int i;
	int j;
	int x = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] >= 48 && argv[i][j] <= 57)
			{
			}
			else
			{
				printf("Error");
				return (1);
			}
		}
		x = x + atoi(*(argv + i));
	}
	printf("%d\n", x);
	return (0);
}
