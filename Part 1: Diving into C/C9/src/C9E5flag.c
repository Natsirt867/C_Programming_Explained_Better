//C9E5flag.c    The program keeps looping until a valid entry has been made
#include <stdio.h>

int main() {
    char choice;
    int isValid = 0; // flag variable

    while (isValid == 0) { // Loops until isValid is equal to 1 (TRUE)
        printf("Enter \"yes\" or \"no\" (y/n): ");
        scanf(" %c", &choice);

        /* if statements that harbor same block statement carries out an OR operation. */
        if (choice == 'n') {
            isValid = 1;
        }
        
        if (choice == 'y') {
            isValid = 1;
        }
        
        if (isValid == 0) {
            printf("\nInvalid entry. Please try again.\n\n");
        }
    }
    puts("\n\nThank you, and Goodbye!\n");
    
    return 0;
}
