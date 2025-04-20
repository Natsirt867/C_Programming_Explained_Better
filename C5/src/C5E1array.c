//C5E1array.c   Demonstrates declaration and initalization of an array
#include <stdio.h>

int main()
{
    char author[13] = "George Lucas"; // Declaring & initializing char array

    /* Letting the compiler decide how many elements that are required.*/
    char book[] = "Star Wars";

    /* Shows that an array name expresses an address.*/
    printf("The author of \"%s\", is %s.\n", book, author);
    return 0;
}

