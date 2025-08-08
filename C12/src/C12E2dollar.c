//C12E2dollar.c     A conditional expression is used as argument for printf()
#include <stdio.h>

int main()
{
    int dollars;

    printf("How many one-dollar bills do you have in your wallet or purse? ");
    scanf(" %d", &dollars);

    puts("");

    printf("You have %d dollar%s\n\n", dollars, (dollars > 1) ? ("s.") : (".") );

    printf("You have an %s number of dollars.\n\n", (dollars % 2 == 0) ? ("even") : ("odd"));

    return 0;
}
