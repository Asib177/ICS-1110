/*
Program that will do the followings:
a)	Declare a variable uninitialized
b)	Declare and  initialize a variable in one statement
c)	Declare and initialize multiple variables with different values in one statement
d)	Declare and initialize multiple variables with the same value in one statement
*/

#include <stdio.h>

int main()
{
    // a) Declare a variable uninitialized
    int uninitializedVariable;

    // b) Declare and initialize a variable in one statement
    int initializedVariable = 100;

    // c) Declare and initialize multiple variables with different values in one statement
    int variables1 = 5, variables2 = 7, variables3 = 12;

    // d) Declare and initialize multiple variables with the same value in one statement
    int x = 3, y = 3, z = 3; // or, int x = y = z = 3;

    // Printing the values of the variables
    printf("Uninitialized Variable: %d\n", uninitializedVariable);
    printf("Initialized Variable: %d\n", initializedVariable);
    printf("Multiple Variables with Different Values: %d, %d, %d\n", variables1, variables2, variables3);
    printf("Multiple Variables with Same Value: %d, %d, %d\n", x, y, z);

    return 0;
}
