#include"holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *main- function that multiply two number received
  *@argc: the numbers of attributes received
  *@argv: array with the attributes recivied
  *prints: print result of the multiply or Error if dont receive two parameters
  *Return: 0 if all its ok otherwise return 1
  **/

int main(int argc, char *argv[])
{
	int i;
	int y;

	if (argc - 1 != 2)
	{
		printf("Error\n");

		return (1);
	}

	i = atoi(argv[1]);
	y = atoi(argv[2]);
	printf("%d\n", i * y);

	return (0);
}
