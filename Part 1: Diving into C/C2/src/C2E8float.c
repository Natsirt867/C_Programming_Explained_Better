//C2E8float.c Introduces the floating-point format pecifier and width specifier
#include <stdio.h>

int main()
{
    printf("\n\n%s has an infinite number of decimal places.\n", "Pi");
    printf("Here we are showing %c decimal places: %f\n", '6', 3.141592);
    printf("Now we are showing only %d decimal places: %.3f\n", 3, 3.141592);
    return 0;
}
