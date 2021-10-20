#include <stdio.h>
#include <math.h>
#define tam 50

//Prototipação
void calcula(int v, int p);

int vetor[tam + 1];
int total, N;

int main()
{   
    int i, j;
    int T;
    scanf("%d", &T);

    for (i = 0; i < T; i++)
    {
        scanf("%d", &N);
        for (j = 0; j < 50; j++)
            vetor[j] = 0;
        total = 0;
        calcula(1, 0);
        printf("%d\n", total);
    }
    return 0;
}
void calcula(int v, int p)
{
    int i;
    if (p == N)
        return;

    if (vetor[p] == 0)
    {
        vetor[p] = v;
        total++;
        return calcula(v + 1, p);
    }
    for (i = 0; i <= p; i++)
    {
        int raiz = (int)sqrt(vetor[i] + v);
        if (pow(raiz, 2) == vetor[i] + v)
        {
            vetor[i] = v;
            total++;
            return calcula(v + 1, p);
        }
    }
    calcula(v, p + 1);
}