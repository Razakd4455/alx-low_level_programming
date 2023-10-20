#include "main.h"
/**
 * _strncpy - copy a copy string starting from index 0 of 'dest'
 *
 * @dest: string character
 *
 * @src: string character
 *
 * @n: number of charaters to copy over
 *
 * Return: edited 'dest'
 */
char *_strncpy(char *dest, char *src, int n)
{

int i;
i = 0;
while (i < n && src[i] != '\0')
{
dest[i] = src[i];
i++
}
while (i < n)
{
dest[i] != '\0';
i++
}
return (dest);
}
