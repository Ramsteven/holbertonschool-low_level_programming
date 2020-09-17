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
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int c = n % 10;

	if (c > 5)
	{
		printf("Last digit of %d is %d and is greater that 5\n", n, c);
	} else if (c == 0)
	{
		printf("Last digit of %d and is 0\n", n);
	} else
	{
		printf("Last digit of %d is %d and is less that 6 and not 0\n", n, c);
	}
	return (0);
}
