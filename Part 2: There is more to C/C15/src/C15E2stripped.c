//C15E2stripped.c   // Shows that you can use loop controls outside of for
#include <stdio.h>

int main()
{
    int cnt = 1;

    for (; cnt <= 10; )
    {
        printf(" %d\n", cnt);
        cnt++;
    }
    
    return 0;
}
