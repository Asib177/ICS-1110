/*
Program that will declare a variable from each data type:
unsigned int, unsigned long int, unsigned long long int,
unsigned short int. Then it will initialize them with values and print them.

Sample output

The unsigned int value: 4294967295
The unsigned long int value: 4294967295
The unsigned long long int value: 18446744073709551615
he unsigned short int value: 65,535


The unsigned int value: 0
The unsigned long int value: 0
The unsigned long long int value: 0
The unsigned short int value: 0

*/

#include <stdio.h>

int main()
{
    unsigned int a = 4294967295;                        // unsigned int data type
    unsigned long int b = 4294967295;                   // unsigned long int data type
    unsigned long long int c = 18446744073709551615ULL; // unsigned long long int data type
    unsigned short int d = 65535;                       // unsigned short int data type

    printf("The unsigned int value: %u\n", a);             // %u for unsigned int
    printf("The unsigned long int value: %lu\n", b);       // %lu for unsigned long int
    printf("The unsigned long long int value: %llu\n", c); // %llu for unsigned long long int
    printf("The unsigned short int value: %hu\n", d);      // %hu for unsigned short int

    return 0;
}
