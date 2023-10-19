#include "main.h"
/**
 * _strcat - concatenate two strings
 *
 * @dest: string to concatenate to
 *
 * @src: string character
 *
 * Return: pointes to the resulting 'dest'
 */
char *_strcat(char *dest, char *src)
{
int a, b;
for (a = 0; dest[a] != '\0'; a++)
for (b = 0; src[b] != '\0'; b++)
{
dest[a] = src[b];
a++;
}
dest[a] = '\0';
return (dest);
}
