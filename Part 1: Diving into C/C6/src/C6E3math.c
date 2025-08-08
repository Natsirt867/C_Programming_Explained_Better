//C6E3math.c    Shows the variety of possible test expressions.
#include <stdio.h>

int main() {
    int a = 7;
    int b = 8;
    int x = 9;
    int y = 5;

    if (7 + 2 == 9) { // TRUE
        printf("\nGanymede is the largest moon in our solar system.\n\n");
    }

    if (a > b) { // FALSE
        printf("The C++ computer language is much easier to learn.\n");
    }

    if (a + b == 15) { // TRUE
        printf("It may be raining diamonds on Uranus and Neptune.\n\n");
    }

    if ((17 + ((5 * 4) / 2)) - 6 != 38) { // TRUE
        printf("If \"Hell\" is a real place, it would be Juipter's moon Io.\n\n");
        a = 3;
        b = 11;
    }

    if (a + b == x + y) { // TRUE
        printf("Enter in a value for a and b respecitvely (like this: 7 12): ");
        scanf(" %d %d", &a, &b);
    }

    if (a > b) { // This statement could be TRUE or FALSE
        printf("\n%d is greater than %d\n", a, b);
    }

    if (a < b) { // This statement could be TRUE or FALSE
        printf("\n%d is less than %d\n", a, b);
    }

    if (a == b) { // This statement could be TRUE or FALSE
        printf("\n%d is equal to %d\n", a, b);
    }

    return 0;
}
