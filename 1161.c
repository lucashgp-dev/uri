#include <stdio.h>

int main()
{

    int  M, N,i;
    long long int f1, f2; //"%lld

    while (scanf("%d %d", &M, &N) != EOF)
    {
        f1 = f2 = 1;
        for (i = 1; i <= M; i++)
        {
            f1 *= i;
        }

        for (i = 1; i <= N; i++)
        {
            f2 *= i;
        }

        printf("%lld\n", f1 + f2);
    }

    return 0;
}