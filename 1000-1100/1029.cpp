#include <stdio.h>
#include <string.h>

int fib(int n, int* cont){
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else{
        *cont+=2;
        return fib(n-1,cont)+fib(n-2,cont);
    }        
}

int main(){
    int i, q, cont, n, fibo;
    scanf("%d",&q);
    for(i=0;i<q;i++){
        cont=0;
        scanf("%d",&n);
        fibo = fib(n,&cont);
        printf("fib(%d) = %d calls = %d\n",n,cont,fibo);    
    }
}