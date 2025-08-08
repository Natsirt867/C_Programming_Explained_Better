//C14E4subs.c   Shows you can use variable to represent subscripts
#include <stdio.h>

int main()
{
    char name[20]; // Declaring a character array variable
    int cnt = 0; // Used for representing subscripts

    printf("Enter your first name: ");
    scanf(" %s", &name);
    puts("");

    while (name[cnt] > '\0') // Loops until it reaches null zero
    {
        printf("name[%d] = %c\n", cnt, name[cnt]);
        cnt++;    
    }
    return 0;
}
