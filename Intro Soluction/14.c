/*
Program that will define a global and a local variable
with the same name but with different values, and then do the following steps in order-

A.	Print the value of the variable before defining the local variable
B.	Print the value of the variable after defining the local variable
C.	Explicitly print the value of the variable as global

Sample output

A.	Global: 10
B.	Local: 20
C.	Global: 10

*/

#include <stdio.h>

// Define a global variable
int global_variable = 10;

int main()
{
    // A. Print the value of the variable before defining the local variable
    printf("A. Global: %d\n", global_variable);

    // Define a local variable with the same name as the global variable
    int global_variable_local = 20;

    // B. Print the value of the variable after defining the local variable
    printf("B. Local: %d\n", global_variable_local);

    // C. Explicitly print the value of the variable as global
    printf("C. Global: %d\n", global_variable);

    return 0;
}
