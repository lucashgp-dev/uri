#include <stdio.h>

int main()
{
    int i, j, N;
    while (scanf("%d", &N) != EOF)
    {

        int Matriz[N][N];

        //Adicionar o 0
        for (i = 0; i < N; i++)
        {

            for (j = 0; j < N; j++)
            {

                Matriz[i][j] = 0;
            }
        }

        //Diagonal principa
        for (i = 0; i < N; i++)
        {

            for (j = 0; j < N; j++)
            {
                if (i == j)
                    Matriz[i][j] = 2;
            }
        }

        //Diagonal secundária
        for (i = 0; i < N; i++)
        {

            for (j = 0; j < N; j++)
            {
                if (i + j == N - 1)
                    Matriz[i][j] = 3;
            }
        }

        //Parte interna
        for (i = N / 3; i < N - (N / 3); i++)
        {

            for (j = N / 3; j < N - (N / 3); j++)
            {
                Matriz[i][j] = 1;
            }
        }

        //Ponto Central
        Matriz[N / 2][N / 2] = 4;

        //Imprimir Matriz
        for (i = 0; i < N; i++)
        {

            for (j = 0; j < N; j++)
            {
                printf("%d", Matriz[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
