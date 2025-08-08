//C13E5nest.c       Demonstrates the use of a nested loop to iterate a value
#include <stdio.h>

int main()
{
    int outer = 0; // Controls outer loop cycles
    int inner = 0; // Controls inner loop cycles

    while (outer < 3) // Inner loop runs 5 times for each cycle of outer loop
    {
        inner = 0; // Inner gets reset to 0 for the net run of inner loop
        while (inner < 5)
        {
            printf("%d", inner += 1);

        }
        
        puts("\n"); // Adds a newline for next cycle of outer loop
        outer += 1; // Increments outer
    }

    return 0;
}
