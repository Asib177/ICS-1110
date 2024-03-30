/*
Program that will take calculate the roots of a quadratic
equation (a.x2 + b.x + c = 0) from the formula, (here, dot (.)
stands for multiplication) -

 root=(- b ± sqrt( b^2-4.a.c))/(2.a)


Sample input (a, b, c)
2      4     -16
1      2       3

Sample output
2.00    -4.00
Imaginary

*/

/*
#include<stdio.h>
#include<math.h>
int main(){
    float a,b,c;
    float x1,x2;

    printf("Enter values for a,b, and c:\n");
    scanf("%f%f%f",&a,&b,&c);

    x1 = (-b + sqrt(pow(b,2)-4*a*c))/(2*a);
    x2 = (-b - sqrt(pow(b,2)-4*a*c))/(2*a);

    printf("x1 = %.2f\n", x1);
    printf("x2 = %.2f", x2);
    return 0;
}
*/

#include <stdio.h>
#include <math.h>

int main()
{
    // Declare variables to store inputs
    float a, b, c;

    // Input values for a, b, and c
    printf("Enter values for a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

    // Calculate the discriminant
    float discriminant = b * b - 4 * a * c;

    // Check if the discriminant is positive, negative, or zero
    if (discriminant > 0)
    {
        // Roots are real and different
        float root1 = (-b + sqrt(discriminant)) / (2 * a);
        float root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("%.2f %.2f\n", root1, root2);
    }
    else if (discriminant == 0)
    {
        // Roots are real and same
        float root = -b / (2 * a);
        printf("%.2f\n", root);
    }
    else
    {
        // Roots are imaginary
        printf("Imaginary\n");
    }

    return 0;
}
