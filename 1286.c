#include <stdio.h>

int max(int a, int b);

int main()
{

    int i, j, n, p;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
        scanf("%d", &p);
        int m[n + 1][p + 1];
        int w[n + 1];
        int v[n + 1];

        for (i = 0; i < n; i++)
        {
            scanf("%d %d", &v[i], &w[i]);
            memset(&m[i], 0, sizeof(m[i]));
        }

        for (i = 1; i <= p; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (j > 0)
                {
                    m[j][i] = m[j - 1][i];
                    if (w[j] <= i)
                        m[j][i] = max(m[j][i], m[j - 1][i - w[j]] + v[j]);
                }
                else
                {
                    m[j][i] = 0;
                    if (w[j] <= i)
                        m[j][i] = max(m[j][i], v[j]);
                }
            }
        }
        printf("%d min.\n", m[n-1][p]);
    }
    return 0;
}

int max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}