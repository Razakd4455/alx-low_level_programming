#include "main.h"
/**
 * _strstr - function name
 * @haystack: parameter 1
 * @needle: parameter 2
 * Return: returns a pointer or NULL
 */
char *_strstr(char *haystack, char *needle)
{

for (; *haystack != '\0'; haystack++)
{
char *i = haystack;
char *j = needle;
while (*i = *j && *j != '\0')
{
i++;
j++;
}
if (*j == '\0')
return (haystack);
}
return (0);
}
