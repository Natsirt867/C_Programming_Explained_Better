//C4E7scanf.c   Shows that scanf() supports multiple arguments.
#include <stdio.h>

int main()
{
    char first, last;

    printf("Please enter your initials (no periods): ");
    scanf(" %c %c", &first, &last);
    printf("\n\nYour initials are %c.%c.\n\n", first, last);

    return 0;
}
