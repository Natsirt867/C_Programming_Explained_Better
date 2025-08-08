//C15E1for.c        Introduces the for loop
#include <stdio.h>

int main()
{
    int cnt;
    
    for (cnt = 1; cnt <= 10; cnt++) // Loop terminates when cnt = 11
    {
        printf(" %d\n", cnt);
    }

    return 0;
}
