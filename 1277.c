#include <stdio.h>
#include <string.h>
#define maxT 101
#define maxN 51

int main()
{
    int N, T, i, j, k, tam, present, ausent, freqtotal, cont;
    char nome[maxT][maxN], freq[maxT][maxN];
    float freqporct;

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d", &N);
        for (j = 0; j < N; j++)
        {
            scanf("%s", nome[j]);
        }

        cont = 0;
        for (j = 0; j < N; j++)
        {
            scanf("%s", freq[j]);
            tam = strlen(freq[j]);
            ausent = 0;
            present = 0;

            for (k = 0; k < tam; k++)
            {
                if (freq[j][k] == 'P')
                {
                    present++;
                }
                else if (freq[j][k] == 'A')
                    ausent++;
            }

            freqtotal = ausent + present;
            freqporct = (present / (float)freqtotal) * 100;

            if (freqporct < 75)
            {
                if (cont == 0)
                    printf("%s", nome[j]);
                else
                    printf(" %s", nome[j]);
                cont++;
            }
        }
        printf("\n");
    }

    return 0;
}