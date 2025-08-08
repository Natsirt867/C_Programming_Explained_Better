//C12E1cond.c   Introduces the conditional expression
#include <stdio.h>

int main()
{
    int number;

    (3 < 4) ? puts("Saturn has 82 moons.") : puts("The Earth is flat.");
    (4 < 3) ? (number = 3) : (number = 7); // Using parentheses to guide order 

    printf("number = %d\n", number);
    return 0;
}
