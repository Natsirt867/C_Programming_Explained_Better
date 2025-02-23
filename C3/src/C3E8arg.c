//C3E8arg.c     Shows that an argument can be a mathematical expression.
#include <stdio.h>

int main()
{
    int snacks, munch;
    
    snacks = 20;
    munch = 17;
    printf("Burt has %d cookies.\n", snacks);
    printf("The Cookie Mobster ate some of Burt's cookies.\n");
    printf("Burt now only has %d cookies left.\n", snacks - munch);
    return 0;
}
