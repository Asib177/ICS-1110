/*
Program that will calculate the circumference of a circle having radius r.
Area, A = 2 * Pi * r

Input:
5

Output:
Area:  31.4

*/

#include <stdio.h>

// #define Pi 3.141593;

int main()
{
    float Pi = 3.141593;
    float r;

    scanf("%f", &r);

    float area = 2 * Pi * r;

    printf("Area:  %.1f", area);

    return 0;
}
