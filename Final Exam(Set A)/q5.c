#include <stdio.h>

int main()
{
    int n;
    float a, b;
    scanf("%d %f %f", &n, &a, &b);

    switch(n)
    {
    case 1:
        printf("%.1f", a+b);
        break;
    case 2:
        printf("%.1f", a-b);
        break;
    case 3:
        printf("%.1f", a*b);
        break;
    case 4:
        if(b!=0) printf("%.1f", a/b);
        else printf("b can not be zero");
        break;
    default:
        printf("Invalid");
        exit(0);
    }
    main();
    return 0;
}

