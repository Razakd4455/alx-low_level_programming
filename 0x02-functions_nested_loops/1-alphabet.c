#include "main.h"
/**
 * main - main function
 *
 * Return: always 0
 */
void print_alphabet(void)
{
char alphabet = 'a';
while (alphabet <= 'z')
{
_putchar(alphabet);
alphabet++;
}
_putchar('\n');
}
