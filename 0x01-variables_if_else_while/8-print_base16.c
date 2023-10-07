#include <stdio.h>
/**
*main - main function
*Result: always 0
*/
int main()
{
for (char digit = '0'; digit <= '9'; digit++)
{
 putchar(digit);
}
for (char letter = 'a'; letter <= 'f'; letter++)
{
putchar(letter);
}
putchar('\n');
return 0;
}

