#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - a function that prints anything
 * @format: a list of types of arguments
 */
void print_all(const char * const format, ...)
{
int i; /* Declare variables and datatype */
va_list print;

va_start(print, format); /* initialize var arguments */
i = 0;
while (format != NULL && format[i] != '\0')
{
switch (format[i])
{
case 'c':
printf("%c", va_arg(print, int));
break;
case 'i':
printf("%d", va_arg(print, int));
break;
case 'f':
printf("%f", va_arg(print, double));
break;
case 's':
{
char *str = va_arg(print, char *);
printf("%s", str);
}
break;
default:
break;
}
if (format[i + 1] != '\0' && (format[i] == 'c' || format[i] == 'i' ||
format[i] == 'f' || format[i] == 's'))
printf(", ");
i++;
}
va_end(print);
printf("\n");
}
