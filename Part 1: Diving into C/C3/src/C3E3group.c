//C3E3group.c   Performs multiple assignment operations in the same line.
#include <stdio.h>

int main()
{
    int pots, pans, plates, utensils, glasses;

    pans = pots = 2; // Storing the numerical values of 2 into pots and pans.
    plates = 8;
    utensils = glasses = plates; // Storing value of 8 into glasses and utensils.

    printf("\nPots = %d\nPans = %d\nPlates = %d\n", pots, pans, plates);
    printf("Glasses = %d\nUtensil Sets = %d\n\n", glasses, utensils);
    
    return 0;

}
