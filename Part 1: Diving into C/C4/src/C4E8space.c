//C4E8space.c   Shows that a spacebar space can be stored in a variable.
#include <stdio.h>

int main(void)
{
    char char1, char2, char3;
    int num1, num2, num3;

    printf("Enter two characters separated by a space (like this: a b): ");
    scanf("%c%c%c", &char1, &char2, &char3);
    
    printf("Enter three integers (like this: 1 2 3): ");
    scanf("%d%d%d", &num1, &num2, &num3);
    
    printf("\n\nHere is the data that you have enetered:\n\n");
    printf("char1 = %c\nchar2 = %c\nchar3 = %c\n\n", char1, char2, char3);
    printf("num1 = %d\nnum2 = %d\nnum3 = %d\n\n", num1, num2, num3);
    return 0;
}
