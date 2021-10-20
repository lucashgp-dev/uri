#include <stdio.h>
#include <string.h>

int main()
{
    char N[1001];
    int i, p1, p2, p3, tam;

    while (scanf("%s", &N) != EOF)
    {
        p1 = p2 = p3 = 0;
        tam = strlen(N);
        for (i = 0; i < tam; i++)
        {
            if (N[i] == '(')
                p1++;
            else if (N[i] == ')')
                p2++;

            if (N[0] == ')' || N[tam-1] == '(')
            {
                p3++;
                break;
            }
        }

        if (p1 == p2 && p3 == 0)
            printf("correct\n");
        else
            printf("incorrect\n");
    }
    return 0;
}