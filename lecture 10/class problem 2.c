#include<stdio.h>
int main()
{
    int num1;
    scanf("%d",&num1);

    if(num1<0){
    num1= num1*(-1);
    }
    printf("%d",num1);
    return 0;
}
