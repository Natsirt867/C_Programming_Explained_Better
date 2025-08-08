//C14E2trick.c      Shows you can iterate a loop counter inside printf()
#include <stdio.h>

int main()
{
    int cnt = 0;
    
    while (cnt < 20)
    {
        printf("%d\t", cnt++);
    }

    puts("\n");

    return 0;
}
