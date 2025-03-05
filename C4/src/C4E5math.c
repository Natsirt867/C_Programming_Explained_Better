//C4E5math.c
#include <stdio.h>

int main(void)
{
    int snacks, munch;

    printf("How many cookies does Burt have? ");
    scanf(" %d", &snacks);

    printf("\nHow many of Burt's cookies did the Cookie Mobster eat? ");
    scanf(" %d", &munch);

    printf("\nNow Burt only has %d cookies left.\n", snacks - munch);
    return 0;
}

