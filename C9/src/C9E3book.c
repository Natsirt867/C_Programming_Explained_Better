//C9E3book.c    Demonstrates the concept of the compound relational test
#include <stdio.h>

int main() {
    int rating;
    puts("\nTo exit the program, just enter 0.\n");

    do {
        printf("On a scale of 1 to 10, how would you rate this book so far? ");
        scanf(" %d", &rating);
        puts("");

        /* The following compound relational test can be read as "greater than or
        equal to 7 but less than or equal to 10" */

        if (rating >= 7) {
            if (rating <= 10) {
                puts("Thats great! I'm glad to hear it!\n");
            }
        }
        
        if (rating >=4) {
            if (rating <= 6) {
                puts("It's just so-so, huh?\n");
            }
        }

        if (rating >= 1) {
            if (rating <= 3) {
                puts("Why are you still reading it then?\n");
            }
        }
    } while(rating);

    return 0;
}
