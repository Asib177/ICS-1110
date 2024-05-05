#include<stdio.h>
int main()
{
    int num=15, y;
    //y=(num>5)?10:5;
    (num>5)?(y=10):(y=5);
    printf("%d",y);

    return 0;
}
