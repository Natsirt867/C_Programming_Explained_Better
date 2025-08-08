//C3E11order.c  Shows how to use parentheses to guide operations.
#include <stdio.h>
int main()
{
    int answer;
    
    answer = 17 + 5 * 4 / 2 - 6; // Original expression.
    printf("\nThe value held in answer is: %d\n\n", answer);

    answer = (17 + ((5 * 4) / 2 )) -6; // Expression rewritten with parentheses.
    printf("The value held in answer is: %d\n\n", answer);

    answer = (((17 + 5) * 4) / 2) - 6; // Changing order of ops. answer = 38.
    printf("The value held in answer is: %d\n\n", answer);
    
    answer = ((17 + 5) * (4 / 2)) - 6; // answer = 38
    printf("The value held in answer is: %d\n\n", answer);

    answer = 17+((5*4) / (2-6)); //answer = 12.
    printf("The value held in answer is: %d\n\n", answer);
    
    answer = (17 + 5) * ((4 / 2) - 6); // answer = -88.
    printf("The value held in answer is: %d\n\n", answer);
    
    answer = ((17 + 5) * 4) / (2 - 6); //answer = -22.
    printf("The value held in answer is: %d\n\n", answer);
    return 0;
    
}
