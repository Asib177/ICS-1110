/*
Program that will take a, b & c as inputs and decide
if the statements are True (1) of False (0)

    (a+b)≤80 && b≥0
    (a-b)==0 ||c!=0
    a!=b ||(b<a)&&c>0

Sample input (a, b, c)
10   -10   0

Sample output
1)	0
2)	1
3)	1
*/

#include <stdio.h>

int main()
{
    // Declare variables to store inputs
    int a, b, c;

    // Input values for a, b, and c
    printf("Enter values for a, b, and c: ");
    scanf("%d %d %d", &a, &b, &c);

    /*
       ? is the ternary conditional operator.
       It has three operands: condition, expression1, and expression2.
       If the condition is true, it evaluates to expression1; otherwise,
       it evaluates to expression2.
    */

    // Determine if statement 1 is true or false
    int statement_1 = ((a + b) <= 80) && (b >= 0) ? 1 : 0;
    printf("1) %d\n", statement_1);

    // Determine if statement 2 is true or false
    int statement_2 = ((a - b) == 0) || (c != 0) ? 1 : 0;
    printf("2) %d\n", statement_2);

    // Determine if statement 3 is true or false
    int statement_3 = (a != b) || ((b < a) && (c > 0)) ? 1 : 0;
    printf("3) %d\n", statement_3);

    return 0;
}
