#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings and the first n bytes of s2
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes from s2 to concatenate
 * Return: returns a pointer to the concatenated string or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
char *ptr;
size_t i, j, k;
if (s1 == NULL)
i = 0;
else
{
for (i = 0; s1[i] != '\0'; i++)
	{
	}
}
if (s2 == NULL)
j = 0;
else
{
for (j = 0; s2[j] != '\0'; j++)
	{
	}
}
if (j > n)
j = n;
ptr = malloc(sizeof(char) * (i + j + 1));
if (ptr == NULL)
return (NULL);
for (k = 0; k < i; k++)
ptr[k] = s1[k];
for (k = 0; k < j; k++)
ptr[k + i] = s2[k];
ptr[i + j] = '\0';
return (ptr);
}
