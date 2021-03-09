#include <stdio.h>
#include <string.h>

int main()
{
    char inp[10000];
    int tam, i , aberto, fechado;
    
    while(scanf("%s",inp)!=EOF)
    {
        getchar();
        aberto =0; fechado =0;
        tam = strlen(inp);
        for(i=0; i<tam; i++)
        {
            if(inp[i] == ')')
                fechado++;
            if(fechado>aberto)
                break;
            if(inp[i] == '(')
                aberto++;
        }
        if(aberto!=fechado)
            printf("incorrect\n");
        else
            printf("correct\n");        
    }



    return 0;
}