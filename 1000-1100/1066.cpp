#include <stdio.h>
 
int main() {
 
	int n, i, cpar=0, cpos=0, cimp=0, cneg=0;
	for(i=1;i<=5;i++)
	{
		scanf("%d",&n);
		if(n%2==0)
		{
			cpar++;
		}
		else
		{
			cimp++;
		}
		if(n>0)
		{
			cpos++;
		}
		else if(n<0)
		{
			cneg++;
		}
			
	}
	printf("%d valor(es) par(es)\n",cpar);
	printf("%d valor(es) impar(es)\n",cimp);
	printf("%d valor(es) positivo(s)\n",cpos);
	printf("%d valor(es) negativo(s)\n",cneg);
 
    return 0;
}