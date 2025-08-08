//C16E1taxes.c      Introduces the AND operator. Calculates 2022 taxes
#include <stdio.h>

int main()
{
    float earn;
    float tax;

    puts("To exit the program, just enter 0.\n");

    while (1)
    {
        printf("Enter income (like this: 30000) $");
        scanf(" %f", &earn);

        if (earn == 0)
        {       
            break;
        }

        if (earn <= 20550)
        {
            tax = 0.10 * earn;
        }

        if (earn >= 20551 && earn <= 83550)
        {
            tax = 2055 + 0.12 * (earn - 20550);
        }

        if (earn >= 83551 && earn <= 178150)
        {
            tax = 9615 + 0.22 * (earn - 83550);
        }

    printf("\nThe tax due for an income of $%.2f is $%.2f\n\n", earn, tax);
    }

    return 0;
}
