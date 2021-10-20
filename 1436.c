#include <stdio.h>

int main()
{
    int T, N, cont, result, i;
    int jgdrs[10];

    //casos possiveis para N : 3,5,7,9;

    scanf("%d", &T);
    cont = 1;

    while (T--)
    {
        scanf("%d", &N);

        if (N == 3)
        {
            for (i = 0; i < 3; i++)
            {
                scanf("%d", &jgdrs[i]);
            }
            result = jgdrs[1];
        }

        else if (N == 5)
        {
            for (i = 0; i < 5; i++)
            {
                scanf("%d", &jgdrs[i]);
            }
            result = jgdrs[2];
        }

        else if (N == 7)
        {
            for (i = 0; i < 7; i++)
            {
                scanf("%d", &jgdrs[i]);
            }
            result = jgdrs[3];
        }

        else if (N == 9)
        {
            for (i = 0; i < 9; i++)
            {
                scanf("%d", &jgdrs[i]);
            }
            result = jgdrs[4];
        }

        printf("Case %d: %d\n", cont, result);
        cont++;
    }

    return 0;
}