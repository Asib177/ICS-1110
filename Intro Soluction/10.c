/*
Program that will declare a variable from each data type:
long int, long long int, long double, short int.
Then it will initialize them with values and print them.

Sample output
The long int value: 2147483647
The long long int value: 9223372036854775807
The long double value: 1.1E+4932
The short int value: 32767


The long int value: -2,147,483,648
The long long int value: -9223372036854775808
The long double value: 3.4E-4932
The short int value: -32768
*/

#include <stdio.h>

int main()
{
    long int a = 2147483647;                 // long int data type
    long long int b = 9223372036854775807LL; // long long int data type
    long double c = 1.1E+4932L;              // long double data type
    short int d = 32767;                     // short int data type

    printf("The long int value: %ld\n", a);       // %ld for long int
    printf("The long long int value: %lld\n", b); // %lld for long long int
    printf("The long double value: %.1Le\n", c);  // %.1Le for long double
    printf("The short int value: %d\n\n", d);     // %d for short int

    // long int w = -2147483648;                  // long int data type
    // long long int x = -9223372036854775808LL; // long long int data type
    // long double y = 3.4E-4932L;               // long double data type
    // short int z = -32767;

    // printf("The long int value: %ld\n", w);       // %ld for long int
    // printf("The long long int value: %lld\n", x); // %lld for long long int
    // printf("The long double value: %.1Le\n", y);  // %.1Le for long double
    // printf("The short int value: %d\n", z);

    return 0;
}
