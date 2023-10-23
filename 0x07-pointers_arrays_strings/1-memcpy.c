#include "main.h"
/**
 * _memcpy - copies n bytes of memory area src to memory area dest
 * @src: memory area to be copied
 * @dest: memory area where target will be pasted
 * @int: type of data of the variable 'i'
 * Return: returns dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;
for (i = 0; i < n; i++)
dest[i] = src[i];
return (dest);
}
