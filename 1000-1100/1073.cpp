#include <stdio.h>
 
int main() {
 
	int n, i, sqr;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			sqr = i * i;
			printf("%d^2 = %d\n",i,sqr);
		}
	}
 
    return 0;
}