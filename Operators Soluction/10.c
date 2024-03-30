/*
Program that will take a, b & c as inputs and decide if the statements
are True (1) of False (0)

    (a+b)≤80
    !(a+c)
    a!=0

Sample input (a, b, c)
10   -10   0

Sample output
a)	1
b)	0
c)	1
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

    // Determine if statement (a) is true or false
    int statement_a = (a + b) <= 80 ? 1 : 0;
    printf("a) %d\n", statement_a);

    // Determine if statement (b) is true or false
    int statement_b = !(a + c);
    printf("b) %d\n", statement_b);

    // Determine if statement (c) is true or false
    int statement_c = a != 0 ? 1 : 0;
    printf("c) %d\n", statement_c);

    return 0;
}
