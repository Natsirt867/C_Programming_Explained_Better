//C3E5swap.c    Demonstrates how to swap values between variables
#include <stdio.h>

int main()
{
    int pots = 2;
    int pans = 1;
    int temp; // Will be used as a temporary "storage container".

    temp = pots; // Preserving value held in pots.
    pots = pans; // Overwriting value held in pots with value held in pans.
    pans = temp; // Overwriting value held in pans with value held in temp.
    printf("pots = %d\n\npans = %d\n\n", pots, pans);

    return 0;
}

