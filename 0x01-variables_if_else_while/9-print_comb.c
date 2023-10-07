#include <stdio.h>
/**
*main - main function
*
*Result: always 0
*/
int main() 
{
for (int i = 0; i < 10; i++)
{  
putchar(i + '0');
if (i < 9)
{	
putchar(',');
putchar(' ');
}
}
putchar('\n');
 return 0;
}

