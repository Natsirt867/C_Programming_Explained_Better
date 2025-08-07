//C10E3menu.c   Shows how to use switch statements to create a menu
#include <stdio.h>

int main()
{
    int choice, select;
        
    while (1) // Infinite loop
    {
        puts("\n\nWhat would you like to see?\n");
        puts("1. Novels");
        puts("2. Video Games");
        puts("3. Exit");
        printf("\nEnter your choice: "); 
        scanf(" %d", &choice);

        if (choice==3)
        {
            break; // Breaks out of the while loop & ends program
        }

        switch (choice) // Using a variable to represent the test expression.
        {   
            case 1: puts("\nWhich author?\n");
                    puts("1. R.A. Salvatore");
                    puts("2. Brandon Sanderson");
                    printf("\nEnter your choice: ");
                    scanf(" %d", &select);
                    switch (select)
                    {
                        case 1: puts("\nThe dark Elf Trilogy.");
                        break;
                        case 2: puts("\nThe Mistborn series.");
                        break;
                        default: puts("\nInvalid entry. Please try again.");
                    }
                    break;
            case 2: puts("\nWhich game system?\n");
                    puts("1. Nintendo");
                    puts("2. TurboGrafx-16");
                    printf("\nEnter your choice: ");
                    scanf(" %d", &select);
                    switch (select)
                    {
                        case 1: puts("\nZelda, Contra, and Final Fantasy.");
                        break;
                        case 2: puts("\nNeutopia, Legendary Axe, and Neutopia 2.");
                        break;
                        default: puts("\nInvalid Entry. Please try again.");
                    }
                    break; // Prevents execution of case 3.

        default: puts("\nInvalid entry. Please try again.");
        }
    }
    return 0;
}
