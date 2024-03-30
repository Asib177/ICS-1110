/*
Program that will take an floating point number as input from
the keyboard and use printf function to perform the followings:

(a)	Print the number right justified within 10 columns
(b)	Print the number to be right justified to 2 columns (Assuming the input has more than 2 digits)
(c)	Print the number rounded to two decimal places
(d)	Print the number rounded to integer (without using conversion or type casting)
(e)	Prints the number in exponential notation/scientific notation

Sample input
123.098

Sample output
(a) Val:          123.098000
(b) Val:123.098000
(c) Val:123.10
(d) Val:123
(e) Val: 1.230980e+02

*/

#include <stdio.h>

int main()
{
    float number;

    // Input floating point number
    printf("Enter a floating point number: ");
    scanf("%f", &number);

    // (a) Print the number right justified within 10 columns
    printf("(a) Val: %10.6f\n", number);

    // (b) Print the number to be right justified to 2 columns
    printf("(b) Val:%8.6f\n", number);

    // (c) Print the number rounded to two decimal places
    printf("(c) Val:%.2f\n", number);

    // (d) Print the number rounded to integer
    printf("(d) Val:%.0f\n", number);

    // (e) Prints the number in exponential notation/scientific notation
    printf("(e) Val:%.6e\n", number);

    return 0;
}
