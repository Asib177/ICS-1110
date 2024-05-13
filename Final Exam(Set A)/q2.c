#include <stdio.h>

int main()
{
    int choice, base, height, side;
    scanf("%d", &choice);

    if(choice == 1)
    {
        scanf("%d %d", &base, &height);
        int tArea = 0.5 * base * height;
        printf("The area of the triangle is: %d square units", tArea);
    }
    else if(choice == 2)
    {
        scanf("%d", & side);
        int sArea = side * side;
        printf("The area of the square is: %d square units", sArea);
    }
    else{
        printf("invalid");
        exit(0);
    }
    main();
    return 0;
}

