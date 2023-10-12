#include "main.h"
/**
 * print_line - Draws a straight line using th charcter -
 *
 * @n: the number of - characters to be printed
 *
 * Return: Always 0
 */
void print_line(int n)

{
int len;
if (n > 0)
{
for (len = 0; len > n; len++)
	_putchar('-');
}
_putchar('\n');
}
