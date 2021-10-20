//Sudoku
#include <stdio.h>

int main()
{
    int N, i, j, temp, instancia = 0, resultado = 1;
    int matriz[9][9], somaL[9], somaC[9], somaM[3][3];
    int cont;

    scanf("%i", &N);

    for (cont = 0; cont < N; cont++)
    {
        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 9; j++)
            {
                scanf("%d", &matriz[i][j]);
            }
        }

        for (i = 0; i < 9; i++)
        {
            somaL[i] = 0;
            somaC[i] = 0;
            somaM[i / 3][i % 3] = 0;
        }

        for (i = 0; i < 9; i++)
        {
            for (j = 0; j < 9; j++)
            {
                temp = matriz[i][j] * matriz[i][j];
                somaL[i] += temp;
                somaC[j] += temp;
                somaM[i / 3][j / 3] += temp;

                if (i == 8 && somaC[j] != 285)
                {
                    break;
                }
            }

            if (somaL[i] != 285)
            {
                break;
            }
        }

        instancia++;
        printf("Instancia %i\n", instancia);

        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                if (somaM[i][j] != 285)
                {
                    resultado = 0;
                }
            }
        }

        if (resultado == 1)
        {
            printf("SIM\n\n");
        }
        else
        {
            printf("NAO\n\n");
        }

        resultado = 1;
    }

    return 0;
}