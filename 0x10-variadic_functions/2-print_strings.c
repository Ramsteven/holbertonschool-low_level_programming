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
	char *string;

	va_start(Valist, n);

	for (; i < n; i++)
	{
		string = va_arg(Valist, char *);
		printf("%s", string == '\0' ? "nil" : string);

		if (separator && i != n - 1 && separator[0] != 0)
			printf("%c ", *separator);
	}
	printf("\n");
	va_end(Valist);
}
