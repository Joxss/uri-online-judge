#include <stdio.h>
 
int main() {
 
	int qtd, i;
	float n1, n2, n3, avg;
	scanf("%d",&qtd);
	for(i=0;i<qtd;i++)
	{
		scanf("%f %f %f",&n1,&n2,&n3);
		avg = (n1*2+n2*3+n3*5)/10;
		printf("%.1f\n",avg);
	}
 
    return 0;
}