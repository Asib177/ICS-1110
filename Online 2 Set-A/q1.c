#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);

    switch (ch)
    {
    case 'A':
        printf("@");
        break;
    case 'E':
        printf("@");
        break;
    case 'I':
        printf("@");
        break;
    case 'O':
        printf("@");
        break;
    case 'U':
        printf("@");
        break;
    case 'a':
        printf("#");
        break;
    case 'e':
        printf("#");
        break;
    case 'i':
        printf("#");
        break;
    case 'o':
        printf("#");
        break;
    case 'u':
        printf("#");
        break;
    default:
        switch (ch >= 'a' && ch <= 'z')
        {
        case 1:
            printf("&");
            break;
        case 0:
            printf("$");
            break;
        }
    }

    return 0;
}
