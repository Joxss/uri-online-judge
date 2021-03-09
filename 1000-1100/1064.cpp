#include <stdio.h>
 
int main() {
 
	float n, media;
	int i, cont;
	for(i=1;i<=6;i++)
	{
		scanf("%f",&n);
		if(n>0)
		{
			cont++;
			media = media + n;
		}
			
	}
	media = media / cont;
	printf("%d valores positivos\n",cont);
	printf("%.1f\n",media);
 
    return 0;
}