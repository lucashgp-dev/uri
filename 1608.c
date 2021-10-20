#include <stdio.h>
#include <string.h>

//Prototipação
void ordena(int vetor[], int n);

int main()
{
    int T, D, I, B;
    int i, j, k;

    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d %d %d", &D, &I, &B);

        int p[I];
        int custoBolo[B];
        memset(custoBolo, 0, sizeof(custoBolo));

        for (j = 0; j < I; j++)
        {
            scanf("%d", &p[j]);
        }
        for (j = 0; j < B; j++)
        {
            int Q;
            scanf("%d", &Q);
            for (k = 0; k < Q; k++)
            {
                int indice, quantidade;
                scanf("%d %d", &indice, &quantidade);
                custoBolo[j] += p[indice] * quantidade;
            }
        }
        ordena(custoBolo, B);
        printf("%d\n", D / custoBolo[0]);
    }
    return 0;
}

void ordena(int vetor[], int n)
{
    int i, j, aux;
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < n - 1; j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                aux = vetor[j];
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = aux;
            }
        }
    }
}
