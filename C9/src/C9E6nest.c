//C9E6nest.c    Introduces the nested loop
#include <stdio.h>

int main() {
    char choice;
    int isValid = 0;

    puts("\nHello there!\n");

    do {
        isValid = 0; // Sets flag variable to 0 for each run of the loop

        while (isValid == 0) {
            printf("Would you like to exit the program? (y/n): ");
            scanf(" %c", &choice);

            if (choice == 'n') {
                isValid = 1;
            }
            
            if (choice == 'y') {
                isValid = 1;
            }

            if (isValid == 0) {
                puts("\nInvalid Entry. Please try again.\n");
            }
        }
        if (choice == 'n') {
            puts("\nHello again!\n");
        }
        
        if (choice == 'y') {
            puts("\n\nGoodbye!\n");
        }
        
    } while (choice == 'n');
    
    return 0;
}
