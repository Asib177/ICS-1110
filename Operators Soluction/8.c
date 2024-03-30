/*
Program that will take two numbers as inputs and print the maximum value. 
(Using conditional operator - ?)

Sample input (x, y)
20     100

Sample output
Max: 100
*/

#include<stdio.h>


int main()
{
    int a, b;

    scanf("%d %d", &a, &b);

    if(a>b)
    printf("Max: %d", a);
    else printf("Max: %d", b);

    return 0;
}
