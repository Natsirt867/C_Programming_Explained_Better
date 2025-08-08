//C13E4dec.c    Introduces the compound operator
#include <stdio.h>

int main()
{
    int cnt = 12;   // "cnt" is short for "counter"
    
    printf("Burt has a package of %d cookies.\n\n", cnt);

    while (cnt > 0) // Loop terminates when cnt is equal to 0
    {
        puts("Crunch...munch...munch... ");
        cnt -= 1; // Using compound assignment operator to decrement cnt.
    }

    printf("\nBurt now has %d cookies left.\n", cnt);
    puts("The cookie Mobster ate all of his cookies.\n");
    return 0;
}

