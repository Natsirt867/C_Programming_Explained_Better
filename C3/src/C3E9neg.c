//C3E9neg.c     Shows that you can store a negative value into a variable.
#include <stdio.h>

int main()
{
    int snacks, munch;
    snacks = 20;
    munch = -17;
    
    printf("Burt has %d cookies \n", snacks);
    printf("The Cookie Mobster ate some of Burt's cookies.\n");
    printf("Now Burt only has %d cookies left.\n", snacks + munch);
    return 0;
}
