#include "main.h"
/**
 * print_most_numbers - print 0 to 9 except 2 and 4
 *
 * Return: Always 0
 */
void print_most_numbers(void)

{
int c;
	for (c = 0; c <= 9; c++)
		if (c != 2 && c != 4)
		{
		_putchar((c % 10) + '0');
		}
_putchar('\n');
return (0);
}
