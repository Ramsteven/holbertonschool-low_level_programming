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
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
		c++;
	}
	putchar('\n');
	return (0);
}
