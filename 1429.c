#include <stdio.h>
#include <string.h>

#define true 1
#define false 0

typedef long long unsigned llu;

llu fatorial(int);

void main()
{

    llu result;
    char i, j;
    char numeros[10];

    while (scanf("%s", numeros))
    {

        if (strcmp(numeros, "0") == 0)
            break;

        result = 0;
        char tam = strlen(numeros);

        for (i = 0, j = tam; i < tam; ++i, --j)
            result += (int)(numeros[i] - '0') * fatorial(j);

        printf("%llu\n", result);
    }
}

llu fatorial(int num)
{

    llu fat = 1;
    while (num > 1)
        fat *= num--;

    return fat;
}