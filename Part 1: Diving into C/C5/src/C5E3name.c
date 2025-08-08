//C5E3name.c    Shows how to overwrite or initialize an array with scanf().
#include <stdio.h>

int main()
{
    char first[15];
    char last[15];
    
    printf("What is your first name? ");
    scanf(" %s", first); // No need to include the address-of operator

    printf("What is your last name? ");
    scanf(" %s", last);
    
    printf("\nYour name is %s %s.\n\n", first, last);
    return 0;
}
