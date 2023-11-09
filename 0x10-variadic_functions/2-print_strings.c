#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - a function that prints strings
 * @separator:a pointer to strings
 * @n:number of strings
 * Return:Always 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;
	const char *result;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
	result = va_arg(strings, const char *);
	if (result != NULL)
	{
	printf("%s", result);
	}
	else
	{
	printf("(nil)");
	}
	if (i != (n - 1) && separator != NULL)
	{
	printf("%s", separator);
	}
	}
	va_end(strings);
	printf("\n");
}
