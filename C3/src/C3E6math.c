//C3E6math.c    Shows you can store the result of mathematical operations into variables.
#include <stdio.h>

int main()
{
    int snacks, munch, leftover;
    snacks = 20;
    munch = 17;
    leftover = snacks - munch; // Storing the result in leftover.

    printf("Burt has %d cookies.\n", snacks);
    printf("The Cookie Mobster ate some of Burt's cookies.\n");
    printf("Burt now only has %d cookies left.\n", leftover);
    return 0;
}


