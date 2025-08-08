//C5E4name.c    Shows that scanf() can handle multiple array variables.
#include <stdio.h>

int main()
{
    char first[15];
    char last[15];
    char color[10];
    char age[3];
    char temp;

    printf("Enter your first and last name (like this: Bob Smith): ");
    scanf(" %s %s", first, last);
    
    printf("How old are you? ");
    scanf(" %s", age);
    
    printf("What is your favorite color? ");
    scanf(" %s", color);

    temp = age[0]; //
    age[0] = age[1];
    age[1] = temp;

    printf("\nYour name is %s %s. ", first, last);
    printf("You are %s years old...he-he...\n", age);
    printf("Your favorite color is %s.\n", color);
    return 0;
}
