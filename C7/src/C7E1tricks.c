//C7E1tricks.c  Demonstrates puts(), getchar(), and putchar()
#include <stdio.h>

int main() {
    char answer;

    puts("\"You're going to be an awesome programmer.\"");
    printf("\nDon't you agree? (y/n): ");
    
    /* Must use assignment operation to retrieve character from getchar(). */
    answer = getchar();
    
    if (answer == 'y') {
        puts("\nThat's great! I'm glad to hear it!\n");
    }

    if (answer == 'n') {
        puts("\nWell...where's your confidence?\n");
    }

    printf("We all love...");
    putchar('C'); // Prints single character to screen.
    printf("\n");
    return 0;
}
