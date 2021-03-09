#include <stdio.h>
 
int main() {
 
	int n, i, cont=0;
	scanf("%d",&n);
	for(i=n;cont<6;i++)
	{
		if(i%2==1)
		{
			printf("%d\n",i);
			cont++;
		}
	}
 
    return 0;
}