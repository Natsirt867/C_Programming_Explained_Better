//C3E2ints.c    Shows that you can declare multiple variables in the same line
#include <stdio.h>

int main()
{
    int pots, pans, plates, glasses, utensils; // Declaring five variables at once.

    pots = 2;
    pans = 3;
    plates = 9;
    glasses = 10;
    utensils = 8;
    
    printf("Burt has %d pots, %d pans, %d plates, ", pots, pans, plates);
    printf("%d glasses, and %d sets of utensils.\n\n", glasses, utensils);
    return 0;
}

