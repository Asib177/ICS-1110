/*
Program that will increment and decrement a number X by Y. (Use += and -= operators)

Sample input(X,Y)
5     10

Sample output
Incremented Value:    10
Decremented Value:   -5

*/

#include <stdio.h>

int main()
{
    // Declare variables to store inputs
    int X, Y;

    // Input values for X and Y
    printf("Enter two numbers X and Y: ");
    scanf("%d %d", &X, &Y);

    // Increment X by Y
    X += Y;
    printf("Incremented Value: %d\n", X);

    // Decrement X by Y
    X -= Y;
    printf("Decremented Value: %d\n", X);

    return 0;
}
