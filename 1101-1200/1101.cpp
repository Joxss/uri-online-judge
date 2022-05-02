#include <stdio.h>
 
int main() {
 
	int m=1, n=1, aux, soma, i;
	for(i=0;i<i+1;i++)
	{
		scanf("%d %d",&m,&n);
		soma=0;
		if(m<=0 || n<=0)
			break;
		if(m>n)
		{
			aux = m;
			m = n;
			n = aux;	
		}
		for(i=m;i<=n;i++)
		{
			printf("%d ",i);
			soma+=i;
		}
		printf("Sum=%d\n",soma);
	}
 
    return 0;
}