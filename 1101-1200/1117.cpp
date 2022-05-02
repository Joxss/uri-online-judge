#include <stdio.h>
 
int main() {
 
	float n, media=0;
	int cont=0;
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
 
    return 0;
}