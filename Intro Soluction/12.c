/*
Program that will define a constant using “CONST” and print the value.

Sample output
The value of pi: 3.14
The value of golden ratio: 1.62
*/

#include <stdio.h>

#define pi 3.14
#define golden_ratio 1.62

int main()
{
    printf("The value of pi: %.2f\n", pi);
    printf("The value of golden ratio: %.2f\n", golden_ratio);

    return 0;
}
