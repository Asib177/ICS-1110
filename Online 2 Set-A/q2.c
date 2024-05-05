#include <stdio.h>

int main()
{
    float weight, height, BMI;
    printf("Input weight in pounds and height in inches: ");

    scanf("%f %f", &weight, &height);

    BMI = (weight / (height * height)) * 703;

    if (BMI < 18.5)
        printf("\"underweight\"");
    else if (BMI >= 18.5 && BMI <= 24.9)
        printf("\"normal weight\"");
    else if (BMI >= 25.0 && BMI <= 29.9)
        printf("\"overweight\"");
    else if (BMI >= 30.0)
        printf("\"obese\"");
    else
        printf("Invalid!");

    return 0;
}
