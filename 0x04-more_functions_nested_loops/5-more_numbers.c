#include "main.h"
/**
 * more_numbers - print x10 the numbers 0 to 14
 *
 * num - numbers to be printed
 *
 * Return: Always 0
 */
void more_numbers(void)

{
int num, count;
for (count = 0; count <= 10; count++)
{
for (num = 0; num <= 14; num++)
{
if (num > 9)
{
_putchar((num / 10) + '0');
}
{
_putchar((num % 10) + '0');
}
}
_putchar('\n');
}
}
