//C16E5psswrd.c     Asks for password and checks password for validity
#include <stdio.h>

int main()
{
    char password[20];  // Declaring an array variable
    int success = 0, hasLower, hasUpper, hasDigit; // Declaring flag variables
    int cnt; // Represents subscript numbers

    puts("Your new password must contain at least 4 lowercase letters, ");
    puts("2 uppercase letters, and 2 digits. Example: BlueBeetle72.\n");

    while (!success) // Loops until success is TRUE (1)
    {
        printf("Create password: ");
        scanf(" %s", &password);

        hasLower = hasUpper = hasDigit = success = 0; // Resets flag variables to 0

        /* The following loop evaluates each element of the password */
        for (cnt = 0; password[cnt] > 0; cnt++) // Loops until it reaches null zero
        {
            if (password[cnt] >= 'a' && password[cnt] <= 'z') // Tests for lowercase.
            {
                hasLower++;        
            }
            if (password[cnt] >= 'A' && password[cnt] <= 'Z') // Tests for lowercase.
            {
                hasUpper++;        
            }
            if (password[cnt] >= '0' && password[cnt] <= '9') // Tests for lowercase.
            {
                hasDigit++;        
            }
        }
    
        if (hasLower >= 4 && hasUpper >= 2 && hasDigit >= 2)
        {
            success = 1;
        }
        else
        {
            puts("\nYour password is invalid. Please try again.");
        }    
    }
    puts("\nThank you. Your new password has been created.\n");
    
    return 0;
}
