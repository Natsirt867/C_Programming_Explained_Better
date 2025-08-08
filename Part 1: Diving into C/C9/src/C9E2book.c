//C9E2book.c    This program needs fixing
#include <stdio.h>

int main() {
    int rating;
    
    puts("\nTo exit the program, just enter 0.\n");
    
    do { 
        printf("On a scale of 1 to 10, how would you rate this book so far?: ");
        scanf(" %d", &rating);

        if (rating >= 7) {
            puts("\nThat's great! I'm glad to hear it!\n");
        }

        if (rating >= 4) {
            puts("\nIt's just so-so, huh?\n");
        }

        if (rating >= 1) {
            puts("\nWhy are you still reading it then?\n");
        }
    } while (rating); // Loops until rating is FALSE (0)
    
    return 0;
}
