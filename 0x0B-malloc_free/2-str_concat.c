#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings
 * @s1:string 1
 * @s2:string 2
 * Return:returns a pointer or null on failure
 */
char *str_concat(char *s1, char *s2)
{

char *s3;
size_t length1, length2, i;
if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";
length1 = strlen(s1);
length2 = strlen(s2);
s3 = (char *)malloc(sizeof(char) * (length1 + length2 + 1));
if (s3 == NULL)
return (NULL);
for (i = 0; i < length1; i++)
{
s3[i] = s1[i];
}
for (i = 0; i < length2; i++)
{
s3[length1 + i] = s2[i];
}
return (s3);
}
