/*
Program that will multiply and divide a number X by Y. (Use *= and /= operators)

Sample input(X,Y)
56       10

-56      -10
Sample output
Multiplication:    560
Division:   5

Multiplication:    560
Division:   5
*/

#include <stdio.h>

int main()
{
    // Declare variables to store inputs
    int X, Y;

    // Input values for X and Y
    printf("Enter two numbers X and Y: ");
    scanf("%d %d", &X, &Y);

    // Multiply X by Y using *=
    X *= Y;
    printf("Multiplication: %d\n", X);

    // Divide X by Y using /=
    X /= Y;
    printf("Division: %d\n", X);

    main();
    return 0;
}
