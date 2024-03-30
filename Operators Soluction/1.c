/*
Program that will take two numbers X and Y as inputs,
then calculate and print the values of their addition, subtraction,
multiplication, division (quotient and reminder).


Sample input (X,Y)
5     10
-5     10.5

Sample output
Addition: 15
Subtraction: -5
Multiplication: 50
Quotient : 0
Reminder: 5


Addition: 5.5
Subtraction: -15.5
Multiplication: -52.5
Quotient: 0
Reminder: -48

*/

#include <stdio.h>

int main()
{
    // Declare variables to store inputs
    float X, Y;

    // Input values for X and Y
    printf("Enter two numbers X and Y: ");
    scanf("%f %f", &X, &Y);

    // Calculate and print addition
    printf("Addition: %.1f\n", X + Y);

    // Calculate and print subtraction
    printf("Subtraction: %.1f\n", X - Y);

    // Calculate and print multiplication
    printf("Multiplication: %.1f\n", X * Y);

    // Check if Y is not zero to avoid division by zero
    if (Y != 0)
    {
        // Calculate and print quotient
        printf("Quotient: %.0f\n", X / Y);

        // Calculate and print remainder
        printf("Remainder: %.1f\n", X - ((int)(X / Y) * Y));
        // printf("Remainder: %.1f\n", fmod(X, Y));
    }
    else
    {
        printf("Cannot divide by zero.\n");
    }

    return 0;
}
