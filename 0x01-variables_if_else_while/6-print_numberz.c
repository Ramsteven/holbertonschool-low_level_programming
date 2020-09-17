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
	int n;

	for (n = '0'; n <= '9'; n++)
		putchar(n);
		putchar('\n');
	return (0);
}
