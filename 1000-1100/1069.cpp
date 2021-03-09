#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main()
{
    int x, i, j, qtd, cont;
    char solo[1010];
    scanf("%d", &qtd);
    for(x=0;x<qtd;x++){
        scanf("%s", solo);
        cont = 0;
        for (i = 0; i < strlen(solo); i++){
            if (solo[i] == '\0')
                break;
            if (solo[i] == '<'){
                for (j = i; j< strlen(solo); j++){
                    if (solo[j] == '>'){
                        cont++;
                        solo[j] = '0';
                        break;
                    }
                }
            }
        }
        printf("%d\n", cont);
    }
    return 0;
}