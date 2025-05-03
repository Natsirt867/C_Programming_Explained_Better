//C6E2if.c  Shows that you can use variables as operands
#include <stdio.h>

int main() {
    char answer;

    printf("Are you going to recommend this book? (y/n/m): ");
    scanf(" %c", &answer); // Entry must be in lowercases

    if (answer == 'y') {
        printf("\nYay! That's good to hear!\n");
    }

    if (answer == 'n') {
        printf("\nWell, that's disappointing.\n");
    }

    if (answer == 'm') {
        printf("\nO.K...well...I hope so.\n");
    }
    
    return 0;
}
