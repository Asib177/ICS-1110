#include <stdio.h>

int main()
{
    int choice;
    scanf("%d", &choice);

    int Base, Height, Length, Width, Radius;
    float Area;

    switch (choice)
    {
    case 1:
        scanf("%d %d", &Base, &Height);
        Area = 0.5 * Base * Height;
        printf("The area of the triangle with base %d and height %d is %.2f.\n", Base, Height, Area);
        break;
    case 2:
        scanf("%d %d", &Length, &Width);
        Area = Length * Width;
        printf("The area of the rectangle with length %d and width %d is %.2f.\n", Length, Width, Area);
        break;
    case 3:
        scanf("%d", &Radius);
        Area = 3.14 * Radius * Radius;
        printf("The area of the circle with radius %d is %.2f.\n", Radius, Area);
        break;
    default:
        printf("Invalid choice\n");
    }

    main();
    return 0;
}
