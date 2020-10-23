#include "variadic_functions.h"

/**
  *sum_them_all-function that add all numbers arguments given
  *@n: the firts argument
  *@...: ellipsis (‘…’) any numbers of parameters
  *
  *Return:return the sum of all numbers
  **/
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, x = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		x += va_arg(ap, int);

	va_end(ap);

	return (x);
}
