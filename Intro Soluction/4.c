/*
Program that will declare an integer,
a floating point number, a character.
Then it will initialize them with values and print those values.

The integer value: 5
The floating point value: 3.141593
The character value: a

The integer value: 100
The floating point value: 1.618000
The character value: z
*/

#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;

    a = 5;
    b = 3.141593;
    c = 'a';

    printf("The integer value: %d\n", a);
    printf("The floating point value:  %f\n", b);
    printf("The character value: %c\n\n", c);

    a = 100;
    b = 1.618000;
    c = 'z';

    printf("The integer value: %d\n", a);
    printf("The floating point value:  %f\n", b);
    printf("The character value: %c\n", c);

    return 0;
}