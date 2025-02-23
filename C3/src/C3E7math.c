//C3E7math.c Shows that a variable can be the lvalue and operand in the same expression.
#include <stdio.h>

int main()
{
    int snacks, munch;

    snacks = 20;
    munch = 17;
    printf("Burt has %d cookies.\n", snacks);
    snacks = snacks - munch; // Storing the difference back into snacks.
    printf("The cookie Mobster ate some of Burt's cookies.\n");
    printf("Burt now only has %d cookies left.\n", snacks);
    return 0;
}
