//C4E6dollar.c  Shows that scanf() allows characters in the control string.
#include <stdio.h>

int main(void)
{
    float price, owe;
    int count, munch;

    printf("Erney just bought some cookies. ");
    printf("How much did the package of cookies cost? ");
    printf("\nEnter price (like this: $7.99): ");
    scanf(" $%f", &price);

    printf("\nHow many cookies are there in the package? ");
    scanf(" %d", &count);

    printf("\nHow many of Erney's cookies did the Cookie Mobster eat? ");
    scanf(" %d", &munch);

    owe = munch * (price / count);
    printf("\n\nCookie Mobster: \"Your chocolate cookies are good!\"\n\n");
    printf("Bernie: \"You like them? The brand is Choco-Lax.\"\n\n");
    printf("\"...and by the way, you owe me $%.2f ", owe);
    printf("for the cookies you just ate.\"\n\n");

    return 0;
}
