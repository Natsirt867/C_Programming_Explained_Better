//C11E1else.c   Demonstrates the simplicity of the if/else combo
#include <stdio.h>

int main()
{
    int age = 21;

    if (age >= 55)
    {
        puts("\nYou get the senior citizen discount.\n");
    }

    if (age < 55)
    {
        puts("Sorry, you do not get the senior discount.\n");
    }

//------------------if/else combo-------------------------
    if (age >= 55)
    {
        puts("\nYou get the senior citizen discount.");
    }

    else // Can save you from having to perform redundant relation testing.
    {
        puts("Sorry, you do not get the senior discount.");
    }

    return 0;
}

