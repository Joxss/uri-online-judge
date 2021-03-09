#include <stdio.h>
#include <stdlib.h>

int main()
{
    int v[100], i, parar, cont, cont2, m, n = 1;
    while (1)
    {

        cont = 0;
        m = 1;
        parar = 0;
        scanf("%d", &n);
        if (n == 0)
            break;
        for (i = 0; i < n; i++)
        {
            v[i] = i + 1;
        }
        for (m = 1; parar != 1; m++)
        {
            for (i = 0; cont < (n - 1); cont++)
            {
                cont2 = 0;
                if (v[i] == 13)
                {
                    for (i = 0; i < n; i++)
                    {
                        v[i] = i + 1;
                    }
                    break;
                }
                v[i] = -1;
                for (i; cont2 < m; i)
                {
                    i++;
                    if (i > (n - 1))
                        i -= n;
                    if (v[i] != -1)
                        cont2++;
                }
            }
            if (cont == (n - 1))
                break;
            cont = 0;
        }
        printf("%d\n", m);
    }
    return 0;
}