#include <stdio.h>
#include <math.h>

int main()
{

    int N, R, B, C, x, y;

    scanf("%d",&N);

    while (N--)
    {

        scanf("%d %d", &x, &y);

        R = pow(3 * x, 2) + pow(y, 2);
        B = 2 * (pow(x, 2)) + pow(5 * y, 2);
        C = -100 * x + pow(y, 3);

        if (R > B && R > C)
            printf("Rafael ganhou\n");

        else if (B > R && B > C)
            printf("Beto ganhou\n");

        else
            printf("Carlos ganhou\n");
    }

    return 0;
}