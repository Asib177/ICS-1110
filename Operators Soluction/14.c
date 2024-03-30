/*
Program that will take a floating point number X as input and evaluate A,B,C where-
A = Value when X is rounded up to the nearest integer
B = Value when X is rounded down to the nearest integer
C = Absolute value of X


Sample input(X)
10.6
-77.9

Sample output
A = 11, B = 10, C = 10.6
A = 78, B = 77, C = 77.9
*/

#include <stdio.h>
#include <math.h>

int main()
{
    // Declare variables to store input and results
    float X;
    int A, B;
    float C;

    // Input value for X
    printf("Enter the value of X: ");
    scanf("%f", &X);

    // Calculate A (rounded up to the nearest integer)
    A = ceil(X);

    // Calculate B (rounded down to the nearest integer)
    B = floor(X);

    // Calculate C (absolute value of X)
    C = fabs(X);
    /*
    fabs() is a mathematical function provided by the C Standard
    Library, which stands for "floating-point absolute value".
    It is used to calculate the absolute value of a floating point number.
    */

    // Print the results
    printf("A = %d, B = %d, C = %.1f\n", A, B, C);

    return 0;
}
