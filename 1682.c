#include <stdio.h>
#include <string.h>

char string[] = "NONPNOPNPONOPNONPNOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPONPNONPONOPNONPNOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPONPNONPONOPNONPNOPNPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPONPNONPONOPNONPNOPNPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNOPNPONOPNONPNOPNPONOPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPONPNONPONOPNONPNOPNPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPONPNONPONOPNONPNOPNPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPOPNOPONOPNONPNOPNPONOPNONPNOPONOPNONPONOPNPONPNONPONOPNONPNOPNPONOPNONPONOPNPONPNONPONOPNONPNOPONOPNONPONOPNPOPNONPNOPNPONOPNONPNOPNPOPNONPNOP";

int main()
{
    int n = strlen(string);
    int m, i;

    while (1)
    {
        scanf("%d", &m);

        if (m == 0)
            return 0;
        else
        {
            i = 0;
            while (m--)
            {
                printf("%c", string[i]);
                i = (i + 1) % n;
            }
        }
        printf("\n");
    }
}