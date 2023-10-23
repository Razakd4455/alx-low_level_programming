#include "main.h"
#include <stddef.h>
/**
 * _strchr - searches for the occureance of the character c in the string s*
 *@s:sring
 *@c:character to be searched for
 *Return:return a pointer to the first occurrence of the character c in
 *the string s, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{

while (*s != '\0')
{
if (*s == c)
{
return (s + i);
}
s++;
}
return ('\0');
}
