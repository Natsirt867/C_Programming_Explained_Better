//C2E11math.c   Introduces multiplication, division, and modulo operators.
#include <stdio.h>

int main()
{
    printf("Burt bought 3 packages of cookies.\n");
    printf("Each package contains 12 cookies.\n");

    printf("The three packages of cookies cost 22 dollars total.\n");
    printf("The price per package is %d dollars ", 22 / 3);
    printf("with a remainder of %d dollar.\n\n", 22 % 3);

    printf("Burt has a total of %d cookies.\n\n", 3 * 12);
    printf("The price per cookie is $%.2f.\n", 22.0 / 36.0);

    return 0;
}
