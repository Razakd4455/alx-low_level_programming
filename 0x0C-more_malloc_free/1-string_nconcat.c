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
	s1 = "";
	if (s2 == NULL)
	s2 = "";
	while (s1[length1])
	length1++;
	while (s2[length2])
	length2++;
	if (n >= length2)
	n = length2;
	ptr = malloc(sizeof(char) * (length1 + length2 + 1));
	if (ptr == NULL)
	return (NULL);
	for (i = 0; i < length1; i++)
	ptr[i] = s1[i];
	for (j = 0; j < n; j++)
	{
	ptr[i] = s2[j];
	i++;
	}
	return (ptr);
}
