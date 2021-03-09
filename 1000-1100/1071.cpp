#include <stdio.h>
 
int main() {
 
	int x, y, aux, i, soma=0;
	scanf("%d",&x);
	scanf("%d",&y);
	if(x>y)
	{
		aux = y;
		y = x;
		x = aux;
	}
	x++;
	for(i=x;i<y;i++)
	{
		if(i%2==1 || i%2==-1)
		{
			soma +=i;
		}
	}
	printf("%d\n",soma);
 
    return 0;
}