#include <stdio.h>
/**
 * main - main function
 *
 * Return: Always 0
 */
int main(void)
{
int i;
for (i = 'a'; i <= 'z'; i++)
{
putchar(i);
}
putchar('\n');
for (i = 'A'; i <= 'Z'; i++)
{
putchar(i);
}
putchar("\n");
return (0);
}
