#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - concates two string and first n bytes s2
 * @s1:string 1
 * @s2:string 2
 * @n:number of n bytes
 * Return:returns pointer or NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	char *ptr;
	unsigned int i, j;
	unsigned int length1 = 0;
	unsigned int length2 = 0;

	if (s1 == NULL)
	{
	s1 = "";
	}
	if (s2 == NULL)
	{
	s2 = "";
	}
	for (length1 = 0; s1[length1] != '\0'; length1++)
	;
	for (length2 = 0; s2[length2] != '\0'; length2++)
	;
	if (n >= length2)
	{
	n = length2;
	}
	ptr = (char *)malloc(length1 + n + 1);
	if (ptr == NULL)
	{
	return (NULL);
	}
	for (i = 0; i < length1; i++)
	{
	ptr[i] = s1[i];
	}
	for (j = 0; j < n; j++, i++)
	{
	ptr[i] = s2[j];
	}
	return (ptr);
}
