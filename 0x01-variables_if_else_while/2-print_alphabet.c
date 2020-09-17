#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  * main - just get a number
  * @void: nothing parameter expected
  *
  * choose - >1
  * Return: 0
  */
int main(void)
{
	char *n = "abcdefghijklmnopqrstuvwxyz\n";

	while (*n)
	{
		putchar(*n);
		n++;
	}

	return (0);
}
