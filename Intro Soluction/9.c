/*
Program that will declare a variable from each
data type: double, boolean. Then it will initialize them with values and print them.

The double value: 3.140000e+00
The boolean value: 1
*/

#include <stdio.h>
#include <stdbool.h>

int main()
{
    double a = 3.140000e+00;
    bool b = true;

    printf("The double value: %e\n", a);
    printf("The boolean value: %d\n", b);

    // double c = 1.618039;
    // bool d = false;

    // printf("The double value: %e\n", c);
    // printf("The boolean value: %d\n", d);

    return 0;
}
