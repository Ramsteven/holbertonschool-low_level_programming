#include <stdio.h>

/**
  * main - print the # of 1 to 100 ,the multiples of 3 print Fizz and 5 Buzz
  * @void: not reviced parameters
  *
  * Return: no return
  **/
void main(void)
{
	int x = 1;

	for (x; x <= 100; x++)
	{
		if ((x % 5 == 0 ||  x % 3 == 0) && x != 1)
		{
			if (x % 3 == 0)
			{
				printf("Fizz");
			}
			if (x % 5 == 0)
			{
				printf("Buzz");
			}
			printf(" ");
		}
		else
		{
			printf("%d ", x);
		}
	}
	printf("\n");
}
