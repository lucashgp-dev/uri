#include <stdio.h>

#define true 1
#define false 0

int main()
{
    int X = 0;
    int c, qtsZero;
    int linha, coluna;
    _Bool bo, ok = true;
    int qtsL, qtsC;

    scanf("%d %d", &qtsL, &qtsC);

    for (linha = 0; linha < qtsL; ++linha)
    {

        qtsZero = 0;
        bo = true;

        for (coluna = 0; coluna < qtsC; ++coluna)
        {

            scanf("%d", &c);
            if (c == 0 && bo)
                qtsZero++;
            else
                bo = false;
        }

        if (linha != 0)
        {

            if ((qtsZero > X || (qtsZero == X && qtsZero == qtsC)) && ok)
                X = qtsZero;
            else
                X = 0, ok = false;
        }
        else
            X = qtsZero;
    }

    if (X)
        printf("S\n");
    else
        printf("N\n");

    return 0;
}
