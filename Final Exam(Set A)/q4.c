#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    if(A<B && A<C) printf("Minimum: %d", A);
    else if(B<A && B<C) printf("Minimum: %d", B);
    else if(C<A && C<B) printf("Minimum: %d", C);

    main();
    return 0;
}

