//C10E2break.c      Introduces the break
#include <stdio.h>

int main()
{
    char choice;
    puts("Enter e at any time to exit the program.\n");
    do
    {
        printf("\nEnter B, Y, R, or G: "); // The entry must be a capital letter.
        scanf(" %c", &choice);

        switch (choice) // Using a variable to represent the test expression
        {
        case 'B': puts("\nCondition Blue. ");
                  puts("The cookie Mobster is secure.");
                  break;
        case 'Y': puts("\nCondition Yellow. ");
                  puts("The cookie Mobster is on the loose.");
                  break;
        case 'R': puts("\nCondition Red. ");
                  puts("\the Cookie Mobster is stealing cookies.");
                  break;
        case 'G': puts("\nCondition Green. ");
                  puts("The Cookie Mobster has been apprehended.\n");
        }
   
    } while (choice != 'e');
    return 0;    
}
