//C9E1calc.c    Shows that you can place conditional statements within loops
#include <stdio.h>

int main(){
    char mathOp;
    int num1, num2, answer;
    int remainder = 0;

    puts("The program can add (+), subtract (-), multiply (*), and divide (/).");
    puts("\nEnter expression like this: 7 + 5\n");
    puts("To exit the program, just enter in all zeros like this: 0 0 0");

    do {
        printf("\n\nEnter expression: ");
        scanf(" %d %c %d", &num1, &mathOp, &num2);

        if (mathOp == '+') {
            answer = num1 + num2;
        }
    
        if (mathOp == '-') {
            answer = num1 - num2;
        }

        if (mathOp == '*') {
            answer = num1 * num2;
        }

        if (mathOp == '/') {
            answer = num1 / num2;
            remainder = num1 % num2;
        }

        printf("\nAnswer: %d", answer);

        if (remainder > 0) { // Prints the remainder if there is a remainder
            printf(" R %d", remainder);
            remainder = 0; // Resetting the remainder to zero for next possible loop
        }
        
        puts(""); // Can also use an empty string for a newline
    
    } while (mathOp != '0'); // Loops while mathOp is not equal to char '0'
    
    return 0;
}
