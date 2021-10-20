#include <stdio.h>
#include <string.h>
#define max 51

//Prototipação
void substring(char str1[], char str2[], int tam1, int tam2);

int main()
{
    char string1[max], string2[max];
    int tam1, tam2;

    while (gets(string1) && gets(string2))
    {
        tam1 = strlen(string1);
        tam2 = strlen(string2);

        if (tam1 >= tam2)
            substring(string1, string2, tam1, tam2);
        else
            substring(string2, string1, tam2, tam1);
    }

    return 0;
}

void substring(char str1[], char str2[], int tam1, int tam2)
{

    int i, j, maior, cont, x, y;
    maior = 0;

    for (j = 0; j < tam2; j++)
    {
        for (i = 0; i < tam1; i++)
        {
            cont = 0;
            for (x = i, y = j; str1[x] == str2[y]; x++, y++)
            {
                if (x == tam1 || y == tam2)
                    break;
                else
                    cont++;
            }
            if (cont > maior)
                maior = cont;
        }
    }
    printf("%d\n", maior);
}