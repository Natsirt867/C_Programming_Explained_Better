//C16E4nums.c       Prints selected integers to screen
#include <stdio.h>

int main()
{
    int cnt = 1;

    while (cnt < 20)
    {
        if ((cnt < 7 || cnt > 10) && cnt != 13)
        {
            printf("cnt = %d\n", cnt++); // Incrementing cnt inside printf()
        }     
        else 
        {
            cnt++;    
        } 
    }
    
    return 0;
}
