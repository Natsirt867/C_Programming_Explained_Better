//C12E4movie.c      Pairs a conditional expression with an if statement
#include <stdio.h>

int main()
{
    int age;
    int allow;
    float price;

    puts("To exit the program just enter in 0 for age.");

    while(1)
    {
        price = 10.00;
        printf("\nHow old are you? ");
        scanf(" %d", &age);
        if (age == 0)
        {
            break;
        }

        if (age >= 18)
        {
            puts("\nWow! You look really young for your age.\n");
            price = (age >= 55) ? (price - 3.00) : (price - 2.00);
            printf("\nYour ticket comes to $%.2f\n", price);
        }
        else
        {
            puts("\nGet lost, pip-squeak!");
        }
    }

    return 0;
}
