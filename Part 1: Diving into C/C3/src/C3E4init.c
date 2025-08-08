//C3E4init.c    Shows you can declare and initialize variable in the same line.
#include <stdio.h>

int main()
{
    int snacks = 24; // Declaring and initializing a variable at the same time.
    printf("\nBurt has %d cookies.\n", snacks);
    snacks = 20; // Overwriting the old value with a new value
    printf("Burt now only has %d cookies.\n", snacks);
    return 0;
}
