/*
Program that will evaluate the equation

2 cos^2  x-√3  sinx+ sin x/2
; where 1<= x <=180 [No checking needed]
[Hint: Beware of angle in degree and radian]

Sample input (x)
30
120
180

Sample output
1.810066
0.778151
3.954243
*/

#include <stdio.h>
#include <math.h>

#define Pi 3.14159265

int main()
{
    float x;

    printf("Enter values for x:\n");
    scanf("%f", &x);

    float result = 2 * pow(cos(x), 2) - sqrt(3) * sin(x) + sin(Pi / 2);

    printf("%f\n", result);
    main();
    return 0;
}

// #include <stdio.h>
// #include <math.h>

// #define PI 3.14159265

// int main()
// {
//     // Declare variables to store input and result
//     int x;
//     float result;

//     // Input value for x
//     printf("Enter the value of x: ");
//     scanf("%d", &x);

//     // Convert degrees to radians
//     float radians = x * PI / 180.0;

//     // Evaluate the equation
//     result = 2 * pow(cos(radians), 2) - sqrt(3) * sin(radians) + sin(radians / 2);

//     // Print the result
//     printf("%.6f\n", result);

//     return 0;
// }
