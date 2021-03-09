#include <stdio.h>
 
int main() {
 
	int qtd, n, i, nc=0, nr=0, ns=0, nt=0;
	float pc, pr, ps;
	char tipo;
	scanf("%d",&qtd);
	for(i=0;i<qtd;i++)
	{
		scanf("%d %c",&n,&tipo);
		
		if(tipo=='C')
			nc = nc + n;
		else if(tipo=='R')
			nr = nr + n;
		else if(tipo=='S')
			ns = ns + n;
		nt = nt + n;		
	}
	pc = ((float)nc/(float)nt)*100;
	pr = ((float)nr/(float)nt)*100;
	ps = ((float)ns/(float)nt)*100;
	printf("Total: %d cobaias\n",nt);
	printf("Total de coelhos: %d\n",nc);
	printf("Total de ratos: %d\n",nr);
	printf("Total de sapos: %d\n",ns);
	printf("Percentual de coelhos: %.2f %%\n",pc);
	printf("Percentual de ratos: %.2f %%\n",pr);
	printf("Percentual de sapos: %.2f %%\n",ps);
 
    return 0;
}