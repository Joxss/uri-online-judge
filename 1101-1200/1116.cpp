#include <stdio.h>
 
int main() {
 
	int qtd, n1, n2, i;
	float res;
	scanf("%d",&qtd);
	for(i=0;i<qtd;i++)
	{
		scanf("%d %d",&n1,&n2);
		if(n2==0)
			printf("divisao impossivel\n");
		else
		{
			res = (float)n1/(float)n2;
			printf("%.1f\n",res);
		}
	}
 
    return 0;
}