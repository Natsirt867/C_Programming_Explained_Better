//C3E10char.c   Introduces the character-type and floating-point type variables.
#include <stdio.h>

int main()
{
    char letter = 'C'; // Remember, all characters msut be enclosed with apostrophes.
    float price = 7.99;
    float discount = 0.2;

    printf("\"%c is for cookie. That's good enough for me.\"\n", letter);
    printf("\"No, Cookie Mobster...%c is for programming.\"\n", letter);
    printf("\"I need cookies!...$%.2f for cookies?!...\n", price);
    printf("... dang inflation!\"\n");
    printf("\"Fine... I'll give you a 20%% discount.\"\n");
    printf("\"...O.K...wait...$%.2f for cookies?!...\"\n\n", price - price * discount);
    return 0;

}
