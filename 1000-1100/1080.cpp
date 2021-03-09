#include <stdio.h>
 
int main() {
 
	int n, maior, i, pos;
	scanf("%d",&n);
	maior = n;
	pos = 1;
	for(i=2;i<=100;i++)
	{
		scanf("%d",&n);
		if(n>maior)
		{
			maior = n;
			pos = i;
		}
	}
	printf("%d\n",maior);
	printf("%d\n",pos);
 
    return 0;
}