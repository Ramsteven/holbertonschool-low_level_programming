#include "variadic_functions.h"
/**
  *
  *
  *
  **/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list Valist;

	va_start(Valist, n);

	for (; i < n; i++)
	{
		printf("%s", va_arg(Valist, char *));

		if (separator && i != n - 1 && separator[0] != 0)
			printf("%c ", *separator);
	}
	printf("\n");
	va_end(Valist);
}
