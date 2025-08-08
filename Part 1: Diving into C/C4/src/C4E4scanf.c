//C4E4scanf.c   Shows the importance of adding leading space in control string.
#include <stdio.h>

int main(void)
{
    char first, last;
    int age;

    printf("Please enter in your first initial: ");
    scanf(" %c", &first); // Prefix the format specifier with a spacebar space
    
    printf("Please enter in your last initial: ");
    scanf(" %c", &last);

    printf("\nHow old are you? ");
    scanf(" %d", &age);

    printf("\n\nYour initials are %c.%c. and you ", first, last);
    printf("are %d years old.\n", age);
    return 0;    

}

