#include <stdio.h>
/**
  * main - print numbers
  * @void: nothing parameter expected
  *
  * choose - print numbers of 0 to 9
  * Return: 0
  */
int main(void)
{
	char n = 0;

	while (n < 10)
	{
		printf("%d", n);
		n++;
	}
	putchar('\n');
	return (0);
}
