#include <stdio.h>

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    if(x>0 && y>0) printf("First Quadrant");
    else if(x<0 && y>0) printf("Second Quadrant");
    else if(x<0 && y<0) printf("3rd Quadrant");
    else if(x>0 && y<0) printf("4th Quadrant");

    main();
    return 0;
}

