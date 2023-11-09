#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters
 * @n:constant variable
 * Return:return sum on success or 0 if n is 0
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;
	va_list sumall;

	if (n == 0)
	{
	return (0);
	}
	va_start(sumall, n);
	for (i = 0; i < n; ++i)
	{
	sum = sum + va_arg(sumall, int);
	}
	va_end(sumall);
	return (sum);
}
