#include <stdio.h>

int main()
{
    float r, a;
    scanf("%f %f", &a, &r);

    float tArea = 3.14159 * r * r;
    float sArea = a * a;

    float shArea = sArea - tArea;

    printf("Shaded Area = %.4f", shArea);
    return 0;
}

