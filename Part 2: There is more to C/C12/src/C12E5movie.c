//C12E5movie.c      Shows that an operand can harbor multiple statements
#include <stdio.h>

int main()
{
    int age;
    int allow;
    float price;

    puts("To exit the program enter in 0 for age.");

    while (1)
    {
        price = 10.00;
        printf("\nHow old are you? ");
        scanf(" %d", &age);
        if (age == 0)
        {
            break;
        }

        (age >= 18) ?
                    puts("\nWow! You look really young for your age!\n"),
                    price = (age >= 55) ? (price - 3.00) : (price - 2.00),
                    printf("\nYour ticket comes to $%.2f\n", price)
                    :
                    puts("\nGet lost, pip-squeak!\n");
    }
    return 0;
}
