#include <stdio.h>
/**
*main -main function
*
*Return: always 0
*/
int main(void)
{
printf("size of char: %llu bytes\n", (unsigned long) sizeof(char));
printf("size of float: %llu bytes\n", (unsigned long) sizeof(float));
printf("size of double: %llu bytes\n", (unsigned long) sizeof(double));
printf("size of int: %llu bytes\n", (unsigned long)  sizeof(int));
printf("size of long: %llu bytes\n", (unsigned long) sizeof(long));
printf("size of long long:%llu bytes\n", (unsigned long) sizeof(long long));
return (0);
}
