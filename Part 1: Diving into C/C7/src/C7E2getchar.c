//C7E2getchar.c  Allows multiple characters to be entered at once.
#include <stdio.h>

int main() {
    char first;
    char last;

    /* The following code does not work as intended.
    printf("Please enter your first initial: ");
    first = getchar();
    printf("\n"Please enter your last initial: ");
    last = getchar(); // Reads newline character instead
    printf("Your initials are %c.%c\n\n", first, last);
    */

    /*Here's a better way.*/
    printf("\nPlease enter your first & last initials like this: DC ");
    first = getchar(); // Retrieves first character and writes value into first
    last = getchar(); // Retrieves last character and writes value to last
    printf("\nYour initials are %c.%c.\n\n", first, last);
    
    return 0;
}
