#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
/* betty style doc for function main goes there */
/**
  * main - just get a number
  * @void: nothing parameter expected
  *
  * choose a message if the number is higher that 1 print "is positive" | if is less the 1  print "is negative" or if the number es 0 print "is zero"
  * Return: 0
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */	
	if (n > 0)
	{
		printf("%d is positive\n", n);
	} else if (n < 0)
	{
		printf("%d is negative\n", n);
	} else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	return (0);
}
