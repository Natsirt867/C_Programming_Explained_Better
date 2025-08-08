//C15E3nothing.c    Shows that you can use loop controls outside of for
#include <stdio.h>

int main()
{
    int cnt = 1;

    for (;;) // Infinite loop
    {
        printf(" %d\n", cnt);
        cnt++;
        if (cnt > 10)
        {
            break;
        }
    }

    return 0;
}
