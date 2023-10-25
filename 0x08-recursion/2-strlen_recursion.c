#include "main.h"
/**
*_strlen_recursion - returns the length of a string
*
*@s: string to measure length
*
*Return: Always 0
*/
int _strlen_recursion(char *s)
{

if (*s != '\0')
{
return (1 + strlen(s + 1));
}
return (0);
}
