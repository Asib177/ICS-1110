/*
Program that will take three integer numbers from keyboard
but assign only the first and last inputs to
variables and skip any assignment of the middle one.

Sample input
20     50     100
33     75      22

Sample output
First Value = 20,  Last Value = 100
First Value = 33,  Last Value = 22
*/

#include <stdio.h>

int main()
{
    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("First Value = %d, ", a);
    printf("Last Value = %d\n", c);

    return 0;
}