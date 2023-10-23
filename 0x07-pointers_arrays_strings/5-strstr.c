#include "main.h"
/**
 * _strstr - function name
 * @haystack: parameter 1
 * @needle: parameter 2
 * Return: returns a pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{

int i, j;

for (i = 0; haystack[i]; i++)
{
for (j = 0; needle[j]; j++)
if (haystack[i] == needle[j])
i++;
return (needle);
{
j++;
}
}
return (0);
}
