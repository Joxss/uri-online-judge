#include <stdio.h>
 
int main() {
 
	float n, media;
	int cont, op=1;
	while(op!=2)
	{
		cont=0;
		media=0;
		while(cont<2)
		{
			scanf("%f",&n);
			if(n<0 || n>10)
				printf("nota invalida\n");
			else
			{
				media+=n;
				cont++;
			}
		}
		media=media/cont;
		printf("media = %.2f\n",media);
		printf("novo calculo (1-sim 2-nao)\n");
		scanf("%d",&op);
		while(op!=1 && op!=2)
		{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d",&op);
		}
	}
 
    return 0;
}