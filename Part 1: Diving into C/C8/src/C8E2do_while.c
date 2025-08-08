//C8E2do_while.c    Introduces do-while and way to remove '\n' from buffer.
#include <stdio.h>

int main() {
    char choice;
    
    do {
        puts("\nTwinkle, twinkle, little star,");
        puts("How I wonder what you are!");
        puts("Up above the world so high,");
        puts("Like a dia...uh-oh...that ain't right..");
        puts("...why is it getting bigger?!...\n");
        printf("Would you like a re-run? (y/n): ");
        choice = getchar();

        while (getchar() != '\n') {} // Loops until getchar() grabs newline character.

    } while (choice == 'y');

    return 0;
}
