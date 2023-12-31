#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 *print_numbers - a function that prints numbers
 * @separator:a pointer to a string
 * @n:constant integer
 *Return:Always 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list numbers;

	va_start(numbers, n);
	for (i = 0; i < n; i++)
	{
	printf("%d", va_arg(numbers, const unsigned int));
	if (i !=  (n - 1) && separator != NULL)
	printf("%s", separator);
	}
	va_end(numbers);
	printf("\n");
}
