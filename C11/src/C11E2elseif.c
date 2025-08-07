//C11E2elseif.c Demonstrates the else-if statement
#include <stdio.h>

int main()
{
    int rating;

    puts("This program asks you to rate Donald Trump.");
    puts("No matter how your rate him, the program will agree with you.");
    puts("To exit the program, just enter in 0.\n");

    while (1) // Infinite loop (a constant cannot be changed).
    {
        printf("\nOn a scale of 1 to 10, how much would you rate Donald Trump? ");
        scanf(" %d", &rating);

        if (rating == 0)
        {
            break;
        }

        if (rating >= 9)
        {
            puts("\nYay!!! Let's make America great again!\n");
        } else if (rating >= 7) {
            puts("\nYeah, he's not bad.\n");
        } else if (rating >= 4) {
            puts("\nWhy is his face orange?\n");
        } else {
            puts("\nTrumpty-Drumpty built the great wall");
            puts("Trumpty-Dumpty took a great fall");
            puts("All of Trump's voters and all of Trump's men");
            puts("put Trumpty back into office again. Uh-oh!!!\n");
        }
    }
    return 0;
}
