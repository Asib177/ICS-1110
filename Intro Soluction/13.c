/*
Program that will define a constant using “DEFINE” and print the value.

Sample output
The value of HEIGHT: 200
The value of PI: 3.14
*/

#include <stdio.h>

#define HEIGHT 200
#define PI 3.14

int main()
{
    printf("The value of HEIGHT: %d\n", HEIGHT);
    printf("The value of PI: %.2f\n", PI);

    return 0;
}
