/*
Program that will take two numbers (a, b) as inputs and compute the value of the equation � (Without using math.h)

X =  (3.31 * a2 + 2.01 * b3) / (7.16 * b2 + 2.01 * a3)

Sample input (a, b)
5            10.5

Sample output
X = 2.315475

*/

#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    float b;

    scanf("%f", &a);
    scanf("%f", &b);

    float X = (3.31 * pow(a, 2) + 2.01 * pow(b, 3)) / (7.16 * pow(b, 2) + 2.01 * pow(a, 3));

    printf("X = %f", X);

    return 0;
}
