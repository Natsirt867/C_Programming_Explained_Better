//C2E9mixup.c   Mismatching an argument with its format specifier.
#include <stdio.h>

int main()
{
    printf("The Cookie Mobster %c cookies!\n", 3);
    printf("The Cookie Mobster %d cookies!\n", '3');

    return 0;
}
