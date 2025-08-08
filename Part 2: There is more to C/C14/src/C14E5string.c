//C14E5string.c     Shows how to fetch string with sapces from user
#include <stdio.h>

int main()
{
    int cnt = -1; // cnt needs to start with -1
    char name[30];

    printf("Enter your full name (like this: Peter Benjamin Parker): ");

    while (name[cnt] != '\n') // Loops until it reaches newline character
    {
        cnt++;
        name[cnt] = getchar(); // Fetches character from input buffer
    }

    name[cnt] = '\0'; // Replacing newline character with null terminator
    printf("\nYour name is: %s.\n", name);

    return 0;
}
