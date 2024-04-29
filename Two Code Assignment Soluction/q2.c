#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, x3, y1, y2, y3;
    printf("Enter inputs (x1, y1), (x2, y2), (x3, y3):\n");
    scanf("%f %f %f %f %f %f", &x1, &y1, &x2, &y2, &x3, &y3);

    float s1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    float s2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
    float s3 = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));

    if (s1 == s2 && s2 == s3)
        printf("The triangle is equilateral.\n");
    else if (s1 == s2 || s1 == s3 || s2 == s3)
        printf("The triangle is isosceles.\n");
    else
        printf("The triangle is scalene.\n");

    return 0;
}
