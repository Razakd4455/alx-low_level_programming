#include <stdio.h>
/**
*main -main function
*
*Return: always 0
*/
int main(void)
{
char a;
int b;
long c;
long long d;
float e;
printf("size of a char: %lu bytes\n", (unsigned long) sizeof(a));
printf("size of an float: %lu bytes\n", (unsigned long) sizeof(b));
printf("size of a long int: %lu bytes\n", (unsigned long)  sizeof(c));
printf("size of long a long int: %lu bytes\n", (unsigned long) sizeof(d));
printf("size of a float:%lu bytes\n", (unsigned long) sizeof(e));
return (0);
}
