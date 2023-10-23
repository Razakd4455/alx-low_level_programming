#include "main.h"
/**
 * _memset - fills the memory with a constant byte b
 *
 * @s: memory to be filled a constant byte
 *
 * @b: the constant byete
 *
 * @n: the number of bytes
 * 
 * Return: return a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
char str[5] = "s";
_putchar("Before memset => %s" ,str);
_memset(str, 'b' ,n);
_putchar("\nAfter memset => %s\n" ,str);
return (s);
}
