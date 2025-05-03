//C8E1while.c   Introduces thew hile statement
#include <stdio.h>

int main() {
    char choice = 'y'; // Initializing choice so that teh while loop while start

    while (choice == 'y') { // Becomes FALSE when choice is not equal to 'y'
        puts("\nHumpty Dumpty sat on a wall.");
        puts("Humpty Dumpty had a great fall.");
        puts("All the king's horses and all the king's men");
        puts("...couldn't care less...\n");
        printf("Would you like a re-run? (y/n): ");
        choice = getchar();
        getchar();  // Captures the lingering newline character
    }
    return 0;
}
