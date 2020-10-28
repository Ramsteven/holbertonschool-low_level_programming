#include "variadic_functions.h"
/**
  *print_strings-function that print a string from given parameters
  *@separator: string that use how separator of string
  *@n: numbers of parameters
  *Return: nothing
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
		printf("%s", string == NULL ? "(nil)" : string);

		if (separator && i != n - 1 && separator[0] != '\0')
			printf("%s", separator);
	}
	printf("\n");
	va_end(Valist);
}
