#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define tam 101

//Prototipação
int compstring(char str1[], char str2[], int tam1, int tam2);

int main()
{
    char nome[tam], final[tam];
    int tam1, tam2;

    fgets(final, tam, stdin);

    while (fgets(nome, tam, stdin))
    {

        tam1 = strlen(nome);
        tam2 = strlen(final);

        if (compstring(nome, final, tam1, tam2) > 0)
        {
            strcpy(final, nome);
        }
    }
    printf("%s", final);

    return 0;
}

int compstring(char str1[], char str2[], int tam1, int tam2)
{

    int i;
    char copia1[tam1], copia2[tam2];

    strcpy(copia1, str1);
    strcpy(copia2, str2);

    tam1 = strlen(copia1) - 1;
    tam2 = strlen(copia2) - 1;

    for (i = 0; i < tam1; i++)
    {
        copia1[i] = tolower(copia1[i]);
    }
    for (i = 0; i < tam2; i++)
    {
        copia2[i] = tolower(copia2[i]);
    }

    return strcmp(copia1, copia2);
}