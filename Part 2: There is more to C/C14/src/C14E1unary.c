//C14E1unary.c      Introduces the increment and decrement operators
#include <stdio.h>

int main()
{
    int num1 = 0; // num1 starts off with a value of zero
    int num2;

    num1++; // postfix incrementation
    ++num1; // prefix incrementation

    printf("num1 = %d\n\n\n", num1); // num1 is now equal to 2
    printf("num1 = %d\n", num1++); // num1 increments after print
    printf("num1 = %d\n\n\n", ++num1); // num1 increments before print
    printf("num1 = %d\n\n\n", --num1); // performing prefix decrementation

    num1 = 0;
    num2 = num1++ * 5; // num1 increments AFTER execution of statement
    printf("num2 = %d\n", num2); // num2 is equal to 0

    num2 = ++num1 * 5; // num1 increments BEFORE execution of statement
    printf("num2 = %d\n\n", num2); // num2 is now equal to 10 (2 * 5)
    return 0;
}
