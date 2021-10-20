#include <stdio.h>
#define tam 12

int main()
{

    double M[tam][tam], soma, media;
    int i, j, x, y, tam_linha, tam_coluna;
    char O[3];

    soma = media = 0;

    scanf("%s", &O);

    for (i = 0; i < tam; i++)
    {
        for (j = 0; j < tam; j++)
        {
            scanf("%lf", &M[i][j]);
        }
    }

    x = 1;
    tam_coluna = tam-1;

    for (i = 0; i < (tam /2); i++)
    {
        for (j = x; j < tam_coluna; j++)
        {
            soma += M[i][j];
        }
        x++;
        tam_coluna--;

    }

    media = soma / 30.0;

    if (O[0] == 'S')
        printf("%.1lf\n", soma);

    else if (O[0] == 'M')
        printf("%.1lf\n", media);

    return 0;
}
