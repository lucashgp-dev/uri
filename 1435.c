#include <stdio.h>

int main()
{
    int N, i, j, ini, fim, valor;

    while (1)
    {

        scanf("%d", &N);
        int Matriz[N][N];

        if (N == 0)
            return 0;

        ini = 0;
        fim = N;
        valor = 1;

        while (1)
        {
            //Preenchendo Matriz
            for (i = ini; i < fim; i++)
            {

                for (j = ini; j < fim; j++)
                {

                    Matriz[i][j] = valor;
                }
            }

            if (fim == 0)
                break;
            else
            {
                ini++;
                fim--;
                valor++;
            }
        }
        //Imprimindo matriz
        for (i = 0; i < N; i++)
        {
            for (j = 0; j < N; j++)
            {
                if (j == 0)
                    printf("%3d", Matriz[i][j]);
                else
                    printf(" %3d", Matriz[i][j]);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}
