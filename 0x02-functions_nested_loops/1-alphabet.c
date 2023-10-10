#include "main.h"
/**
 * main - main function
 *
 * Return: always 0
 */
void print_alphabet(void)
{
char letter = 'a';
	while (letter <= 'z')
	{
	_putchar(letter);
	letter++;
	}
	_putchar('\n');
	return (0);
}
