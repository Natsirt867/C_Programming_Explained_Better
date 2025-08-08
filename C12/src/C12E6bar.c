//C12E6bar.c    This program utilizes three conditional operators
#include <stdio.h>

int main()
{
    char military;
    float bill;
    float percent;
    int age;
    puts("To exit the program enter in 0 for age.\n ");

    while (1)
    {
        printf("Enter your age: ");
        scanf(" %d", &age);

        if (age == 0)
        {
            printf("\nBye!\n");
            break;
        }

        (age >= 21) ?
            puts("\nSometime later...\n"),
            printf("I hope you had a wonderful evening.\n"),
            printf("Are you military? y\n: "),
            scanf(" %c", &military),
            printf("Your bill comes to (enter amount like this 12.50): $"),
            scanf(" %f", &bill),
            percent = (age >= 55) ? (0.10) : (0.05),
            bill = (military == 'y') ? (bill - bill * (percent + .10)) : (bill - bill * percent),
            printf("\nYour bill is now %.2f\n\n", bill)
            :
            printf("\nGet lost!!!\n\n");

    }

    return 0;
}
