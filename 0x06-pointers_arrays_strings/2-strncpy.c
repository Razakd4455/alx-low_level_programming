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

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];

for (n > i; i++);

dest[i] != '\0';

return (dest);
}
