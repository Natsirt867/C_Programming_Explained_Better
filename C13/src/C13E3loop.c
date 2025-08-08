//C13E3loop.c       Uses a free-running loop to carry out iteration
#include <stdio.h>
int main()
{
    int counter = 0;
    
    while (counter <= 10) // Becomes FALSE when counter is equal to 1
    {
        printf("counter = %d\n", counter = counter + 1);
    }
    return 0;
}
