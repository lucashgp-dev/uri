#include <stdio.h>
#define tam 12

int main()
{

    double M[tam][tam], soma, media;
    int C, i, j;
    char T[3];

    soma = media = 0;

    scanf("%d", &C);
    scanf("%s", &T);

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }

    for (i = 0; i < tam; i++)
    {
        soma += M[i][C];
    }

    media = soma / 12.0;

    if (T[0] == 'S')
        printf("%.1lf\n", soma);

    else if (T[0] == 'M')
        printf("%.1lf\n", media);

    return 0;
}
