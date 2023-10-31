#include "main.h"
#include <string.h>
#include <stdlib.h>
/**
 * _strdup - duplicates a string
 * @str:the orginal string to be duplicated
 * Return: returns a pointer or NULL
 */
char *_strdup(char *str)
{
char *duplicate;
if (str == NULL)
return (NULL);
duplicate = (char *)malloc(strlen(str + 1));
return (duplicate);
if (duplicate == 0)
return (NULL);
free(duplicate);
}
