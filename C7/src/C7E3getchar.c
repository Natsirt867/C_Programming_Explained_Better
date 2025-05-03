//C7E3getchar.c  Shows how to remove newline character out of buffer
#include <stdio.h>

int main() {
    char first;
    char last;
    
    printf("Please enter your first initial: ");
    first = getchar();
    
    getchar(); // Captures the newline character but does nothing with it
    printf("\nPlease enter your last initial: ");
    last = getchar();

    printf("\nYour initials are %c.%c\n\n", first, last);

    return 0;
}
