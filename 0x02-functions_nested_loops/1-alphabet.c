#include "main.h"
/**
 * main - checks the code
 *
 * return: always 0
 */
void print_alphabet(void);
{
char alphabet = 'a';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
putchar('\n');
return (0);
}
