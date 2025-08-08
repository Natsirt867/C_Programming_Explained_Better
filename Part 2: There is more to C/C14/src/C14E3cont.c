//C14E3cont.c       Introduces the continue statement
#include <stdio.h>

int main()
{
    int cnt = 0;
    
    while (cnt < 20)
    {
        cnt++; // Incrementing the cnt by one
        if (cnt == 13)
        {
            continue; // Jumps back to the beginning of loop body
        }

        printf("%d\t", cnt);
    }

    puts("\n");

    return 0;
}
