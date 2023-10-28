#include "main.h"
/**
 * _memset - fills the memory with a constant byte b
 *
 * @s: memory to be filled a constant byte
 *
 * @b: the constant byete
 *
 * @n: the number of bytes
 * Return: return a pointer to the memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
s[i] = b;
return (s);
}
