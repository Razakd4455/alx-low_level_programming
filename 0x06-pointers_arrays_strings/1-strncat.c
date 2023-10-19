#include "main.h"
/**
 * _strncat - concatenates two strings
 *
 * @dest: string be concantenat to
 *
 * @src: string character
 *
 * @n: number of bytse
 *
 * Return: pointes to the resulting pointer 'dest'
 */
char *_strncat(char *dest, char *src, int n)
{

int i, a;
for (i = 0; dest[i] != '\0'; i++)
for (a = 0; src[a] != '\0' && n > 0; a++, n--, i++)
{
dest[i] = src[a];
}
return (dest);
}
