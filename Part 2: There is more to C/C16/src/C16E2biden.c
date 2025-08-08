//C16E2biden.c      Makes use of all the logical operators
#include <stdio.h>

int main()
{
    int rating;

    puts("This program asks you to rate Joe Biden.");
    puts("No matter how you rate him, the program will agree with you.");
    puts("To exit the program, just enter 0.");

    while (1)
    {
        printf("\n\nOn a scale of 1 to 10, how would you rate Joe Biden? ");
        scanf(" %d", &rating);
        puts("\n");

        if (rating == 0)
        {       
            break;
        }

        if (rating >= 9)
        {
            puts("Yay!!! Let's Build Back Better! Yay!!!\n");
        }

        if (rating == 7 || rating == 8) // rating must be equal to 7 or 8
        {
            puts("Yeah, he's alright.\n");
        }

        if (rating >= 4 && rating <= 6) // equivalent expression: (4 <= rating <= 6)
        {
            printf("He's so weird. He's always sniffing...things...\n");
        }

        if (!(rating >= 4)) // politicking in action (e.g., a rating of 3 returns TRUE)
        {
            printf("Eww, I'd rather not talk about Biden...");
            printf("I'd rather play my video game, Ninja Gaiden.");
        }
    }
    return 0;
}

