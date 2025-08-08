//C6E1if.c  Introduces the if statement.
#include <stdio.h>

int main() {
    if (10 > 5) { // TRUE. 10 is greater than 5. The code block will execute
        printf("\nMars is inhabited by robots.\n"); // It's got rovers roaming about
    }

    if (10 < 5) { // False. The code block will not execute
        printf("Your best friend was born on Saturn's largest moon, Titan.\n");
    }
    return 0;
}
