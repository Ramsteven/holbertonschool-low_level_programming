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
	char c;

	for (c = 'z'; c >= 'a'; --c)
		putchar(c);
	putchar('\n');
	return (0);
}
