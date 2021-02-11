#include <stdio.h>
#include <string.h>
#include <math.h>

int mdc(int num1, int num2) {

    int resto;

    do {
        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } while (resto != 0);

    return num1;
}

int main()
{   
    char op;
    int n1, d1, n2, d2, nf, df, div, q, i;
    scanf("%d",&q);
    for(i=0;i<q;i++){
        scanf("%d / %d %c %d / %d",&n1,&d1,&op,&n2,&d2);
        if(op=='+'){
            nf = n1*d2 + d1*n2;
            df = d1*d2;
        }
        else if(op=='-'){
            nf = n1*d2 - n2*d1;
            df = d1*d2;
        }
        else if(op=='*'){
            nf = n1*n2;
            df = d1*d2;
        }
        else if(op=='/'){
            nf = n1 * d2;
            df = n2 * d1;
        }
        div = mdc(nf,df);
        div = abs(div);
        printf("%d/%d = %d/%d\n",nf,df,nf/div,df/div);
    }
}