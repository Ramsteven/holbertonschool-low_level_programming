#include"holberton.h"
#include <stdio.h>
/**
  *main- function that get the numbers of arguments passed into it
  *@argc: the numbers of attributes received
  *@argv: array with the attributes recivied
  *prints: print the numbers of arguments passed into it
  *Return: 0 if all its ok
  **/

int main(int argc, char __attribute__ ((unused))  *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
