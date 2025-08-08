//C6E4test  Shows that a test expresion returns a 1 or 0.
#include <stdio.h>

int main() {
    int a = 0;
    int b = 6;
    int test1, test2;

    if (3) { // TRUE. A non-zero value by itself returns TRUE
        printf("The subsurface ocean on Europa may harbor life.\n\n");
    }

    if (a) { // FALSE. A numerical value of zero returns FALSE
        printf("Earth has more water than Europa.\n");
    }

    test1 = 7 < 3; // Relational test yields FALSE. Zero gets stored into test1
    test2 = a < b; // Relational test yields TRUE. One gets stored into test2
    
    printf("test1 = %d\n\n", test1);
    printf("test2 = %d\n\n", test2);
    printf("5 < 6 = %d\n\n", 5 < 6); // A condition can serve as an argument

    return 0;
}
