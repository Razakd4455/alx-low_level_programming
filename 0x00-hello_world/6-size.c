#include <stdio.h>
/**
*main -main function
*
*Return: always 0
*/
int main(void)
{
char a;
float b;
int c;
long d;
long long e;
printf("size of char: %lu bytes\n", (unsigned long) sizeof(a));
printf("size of float: %lu bytes\n", (unsigned long) sizeof(b));
printf("size of int: %lu bytes\n", (unsigned long)  sizeof(c));
printf("size of long: %lu bytes\n", (unsigned long) sizeof(d));
printf("size of long long:%lu bytes\n", (unsigned long) sizeof(e));
return (0);
}
