//C5E2subscripts.c  Demonstrates how to overwrite characters in an array
#include <stdio.h>

int main()
{
    char planet[] = "Neptune";
    
    printf("\n%s is very cold and windy.\n\n", planet);
    
    /* Displays the base address of planet.*/
    printf("The address of planet is %p.\n\n", planet);

    /*Prefixing the array name with an address of operator makes no difference */
    printf("The address of planet is %p.\n\n", &planet);

    /*Displays the base address of planet using the first subscript.*/
    printf("The address of planet is %p.\n\n", &planet[0]);

    /*Displays the address of the 2nd subscript.*/
    printf("The address of planet[1] is %p.\n\n", &planet[1]);

    /*Prints the first three lements to screen.*/
    printf("The first element is:\t%c\n", planet[0]);
    printf("The second element is:\t%c\n", planet[1]);
    printf("The third element is:\t%c\n\n", planet[2]);

    // The array name itself is not a variable so you can't do this: planet = 'V';
    planet[0] = 'V';
    planet[1] = 'e';
    planet[2] = 'n';
    planet[3] = 'u';
    planet[4] = 's';
    planet[5] = '\0';

    /* Make sure you include null zero; otherwise you'll get "Venusne". The unused elements will still be occupied with characters from the previous string, "Neptune".*/
    
    printf("%s is the hottest planet in the solar system.\n", planet);
    return 0;
}
