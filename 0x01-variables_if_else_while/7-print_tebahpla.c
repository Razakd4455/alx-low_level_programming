#include <stdio.h>
/**
*main - main function
*
*Result: always 0
*/
int main() {
    for (char letter = 'z'; letter >= 'a'; letter--) {
        putchar(letter);
    }

    
    putchar('\n');

    return 0;
}
