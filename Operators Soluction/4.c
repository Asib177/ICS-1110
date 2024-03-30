/*
Program that will increment and decrement a
number X by 1 inside the printf function. (Use ++ and - - operators)

Sample input(X)
5

Sample output
X++ :    5
++X :    7
X- -  :    7
--X   :    5

*/

#include <stdio.h>

int main()
{
    int X;

    scanf("%d", &X);

    printf("X++ : %d\n", X++);
    printf("++X : %d\n", ++X);
    printf("X-- : %d\n", X--);
    printf("--X : %d\n", --X);

    return 0;
}
