/*
Program that will receive the values of an integer,
a floating point number, a character from the keyboard and print those values.
Input:
5
3.141593
A

Output:
The integer value: 5
The floating point value: 3.141593
The character value: a
*/

#include <stdio.h>

int main()
{
    int a;
    float b;
    char c;

    scanf("%d", &a);
    scanf("%f", &b);
    getchar();
    scanf("%c", &c);

    printf("The integer value: %d\n", a);
    printf("The floating point value: %f\n", b);
    printf("The character value: %c\n", c);

    return 0;
}