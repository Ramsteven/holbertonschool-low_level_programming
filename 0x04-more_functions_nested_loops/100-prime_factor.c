#include <stdio.h>

/**
  * main- return the prime factor of a number
  *@void: no arguments
  *
  *Return: return nothing
  **/
int main(void)
{
	long int i = 612852475143;
	long int x = 2;
	long int n = i;


	while (n != 1)
	{
		if (n % x == 0)
		{
			n = n / x;
		}
		else if (n % x != 0)
		{
			x++;
		}
	}

	printf("%lu\n", x);

	return (0);
}
