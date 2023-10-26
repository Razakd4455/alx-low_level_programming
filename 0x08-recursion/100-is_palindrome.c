#include "main.h"
/**
 * strlen_recursion - to get string lenght
 * @s:string
 * Return:lenght of string
 */
int _strlen_recursion(char *s)
{

if (*s == '\0')
return (0);
else
return (1 + _strlen_recursion(s + 1));

}
/**
 *compare_string - compare each character of a string
 *@s:string
 *@left:smallest iterator
 *@right:largest iterator
 *Return:int
 */
int compare_string(char *s, int right, int left)
{
if (*s + left == *s + right)
{
if (left == right || left == right + 1)
return (1);
return (0 + compare_string(s, left + 1, right - 1));

}

return (0);

}
/**
 * is_palindrome - detects if a string is palindrome or not
 * @s:string
 * Return: 1 if it is palindrome or 0 if it is not
 */
int is_palindrome(char *s)
{
if (*s == '\0')
return (1);
return (compare_string(s, 0, _strlen_recursion(s) - 1));
}
