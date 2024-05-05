#include<stdio.h>
int main()
{
    int num, num1, num2, output;
    scanf("%d",&num);    //15   51

    num1= num%10;
    num2= num/10;

    output= num1*10 + num2;

    printf("Outpur: %d",output);
    return 0;
}
