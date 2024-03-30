/*
Program that will evaluate the following equations -
    X = a – b / 3 + c * 2 – 1
    Y = a – ( b / ( 3 + c ) * 2) - 1
    Z = a – ( ( b / 3) + c * 2) - 1

Sample input (a, b, c)
9     12     3

Sample output
X = 10
Y = 4
Z = -1
*/

#include <stdio.h>

int main()
{
    // Declare variables to store inputs
    int a, b, c;

    // Input values for a, b, and c
    printf("Enter values for a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    // Evaluate equation X
    int X = a - b / 3 + c * 2 - 1;
    printf("X = %d\n", X);

    // Evaluate equation Y
    int Y = a - (b / (3 + c) * 2) - 1;
    printf("Y = %d\n", Y);

    // Evaluate equation Z
    int Z = a - ((b / 3) + c * 2) - 1;
    printf("Z = %d\n", Z);

    return 0;
}
