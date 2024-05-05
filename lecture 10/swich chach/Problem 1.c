
#include<stdio.h>
int main()
{
    int num;
    scanf("%d",&num);

    switch(num){
        case 1: printf("Red");
            break;
        case 2: printf("Green");
            break;
        default: printf("invalid");
    }
}
