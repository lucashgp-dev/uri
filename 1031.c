#include <stdio.h>
#include <string.h>

//Prototipação
int Salto(int n, int k);

int main()
{
    int N, K;

    while (1)
    {
        scanf("%d", &N);

        if (!N)
            break;

        K = 1;
        while (Salto(N, K) + 2 != 13)
            ++K;

        printf("%d\n", K);
    }

    return 0;
}

int Salto(int n, int k)
{
    int i, X = 0;

    for (i = 1; i < n; ++i)
        X = (X + k) % i;

    return X;
}