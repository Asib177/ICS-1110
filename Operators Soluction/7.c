/*
Program that will declare and initialize an integer
and a floating point number. Then it will perform floating
to integer and integer to floating conversions using
(a)	Assignment operation
(b)	Type casting

Sample input
-150      123.125

Sample output
Assignment:   123.125000 assigned to an int produces 123
Assignment:  -150 assigned to a float produces -150.000000
Type Casting: (float) -150 produces -150.000000
Type Casting: (int) 123.125 produces -123
*/

#include <stdio.h>

int main()
{
    // Declare and initialize an integer and a floating point number
    int integer_value = -150;
    float float_value = 123.125;

    // (a) Floating to integer conversion using assignment operation
    int int_from_float_assign = float_value;
    printf("Assignment: %.6f assigned to an int produces %d\n", float_value, int_from_float_assign);

    // (a) Integer to floating conversion using assignment operation
    float float_from_int_assign = integer_value;
    printf("Assignment: %d assigned to a float produces %.6f\n", integer_value, float_from_int_assign);

    // (b) Floating to integer conversion using type casting
    int int_from_float_cast = (int)float_value;
    printf("Type Casting: (int) %.6f produces %d\n", float_value, int_from_float_cast);

    // (b) Integer to floating conversion using type casting
    float float_from_int_cast = (float)integer_value;
    printf("Type Casting: (float) %d produces %.6f\n", integer_value, float_from_int_cast);

    return 0;
}
