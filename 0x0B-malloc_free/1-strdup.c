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
size_t length;
if (str == NULL)
return (NULL);
length = strlen(str);
duplicate = (char *)malloc(sizeof(char) * (length + 1));
if (duplicate == NULL)
return (NULL);
strcpy(duplicate, str);
return (duplicate);
}
