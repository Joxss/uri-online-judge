#include <stdio.h>
 
int main() {
 
	int i=1, j=7, cont, sub;
	while(i<10)
	{
		sub=0;
		for(cont=j;cont>j-3;cont--)
		{
			printf("I=%d J=%d\n",i,j-sub);
			sub++;
		}
		i+=2;
		j+=2;
	}
 
    return 0;
}