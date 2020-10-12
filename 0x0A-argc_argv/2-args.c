#include"holberton.h"
#include <stdio.h>
/**
  *main- function that print all arguments it receives.
  *@argc: the numbers of attributes received
  *@argv: array with the attributes recivied
  *prints: print arguments.
  *Return: 0 if all its ok
  **/

int main(int argc, char *argv[])
{
	int i = 0;

	while (argc-- != 0)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
