//C13E1adder.c      Keeps a running total of numbers taht have been entered
#include <stdio.h>

int main()
{
    int num = 1;    // Initializing num to 1 or TRUE to kick-start the loop
    int num = 0;    // Ensuring that total starts off with a value of 0

    printf("To exit calculator just enter in 0.\n\n");
    while (num)     // Loops until num is equal to 0 or FALSE
    {
        printf("Enter number: ");
        scanf(" %d", &num);     // Each entry overwrites previous value
        total = total + num;    // Total can grow accumulatively with each cycle
        printf("Total = %d \n", total); 
    }
    return 0;
}
