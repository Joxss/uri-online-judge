#include <stdio.h>
#include <math.h>
//\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n
int main()
{
	int q, i, n1, n2, resto, mdc;
	scanf("%d",&q);
	for(i=0;i<q;i++){
		scanf("%d %d",&n1,&n2);
		if(n1>n2){
			resto = n1;
			n1 = n2;
			n2 = resto;
		}
		resto=n1%n2;
            while(resto!=0)
            {
            	mdc = resto;
            	n1    = n2;
            	n2    = resto;
            	resto = n1%n2;       
            }
		printf("%d\n",mdc);
	}
}