#include <stdio.h>

int main()
{

    int N, cont;
    float C;

    scanf("%d", &N);

    while (N--)
    {
        scanf("%f", &C);
        cont = 0;
        while (C > 1)
        {
            C = C / 2;
            cont++;
        }

        printf("%d dias\n", cont);
    }

    return 0;
}