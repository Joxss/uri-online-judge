#include <stdio.h>
 
int main() {
 
	int valor, soma=0, n100=0, n50=0, n20=0, n10=0, n5=0, n2=0, n1=0;
	scanf("%d",&valor);
	while(soma!=valor)
	{
		if(soma+100<=valor)
		{
			soma+=100;
			n100++;
		}
		else if(soma+50<=valor)
		{
			soma+=50;
			n50++;
		}
		else if(soma+20<=valor)
		{
			soma+=20;
			n20++;
		}
		else if(soma+10<=valor)
		{
			soma+=10;
			n10++;
		}
		else if(soma+5<=valor)
		{
			soma+=5;
			n5++;
		}
		else if(soma+2<=valor)
		{
			soma+=2;
			n2++;
		}
		else if(soma+1<=valor)
		{
			soma+=1;
			n1++;
		}
	}
	printf("%d\n",valor);
	printf("%d nota(s) de R$ 100,00\n",n100);
	printf("%d nota(s) de R$ 50,00\n",n50);
	printf("%d nota(s) de R$ 20,00\n",n20);
	printf("%d nota(s) de R$ 10,00\n",n10);
	printf("%d nota(s) de R$ 5,00\n",n5);
	printf("%d nota(s) de R$ 2,00\n",n2);
	printf("%d nota(s) de R$ 1,00\n",n1);
 
    return 0;
}