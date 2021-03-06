#include "variadic_functions.h"

/**
  *print_numbers-function that prints numbers, followed by a new line.
  *@separator: the firts argument
  *@n: number of integers passed to the function
  *
  *Return: the numbers
  **/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (separator && i != n - 1 && separator[0] != 0)
			printf("%c ", *separator);
	}
	printf("\n");
	va_end(ap);
}
