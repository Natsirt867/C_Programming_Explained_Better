//C4E3scanf.c   Shows scanf() should be paired with instructions for user.
#include <stdio.h>

int main(void)
{
    char initial;

    printf("Please enter in your first initial: ");

    scanf("%c", &initial);
    printf("\nYour first initial is %c.\n\n", initial);
    return 0;    

}
