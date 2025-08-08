//C13E6nest.c       Prints the numbers from 1 to 100 in groups of five
#include <stdio.h>
int main()
{
    int outer = 0;  // Represents the outer loop
    int inner = 0;  // Represents the inner loop
    int num = 0;    // Represents the value to be iterated

    while (outer < 20)
    {
        inner = 0; // Inner gets reset to 0 for the next run of inner loop
        while (inner < 5)
        {
            if (num < 9) // Prefixes each single digit number with 0;
            {
                printf("0");
            }

            printf("%d ", num += 1); // Increments/prints value held in num
            inner += 1; // Increments Inner
        }
        outer += 1; 
        puts("");
    }
    return 0;
}

