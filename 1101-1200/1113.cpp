#include <stdio.h>
 
int main() {
 
	int i, n1=1, n2=0;
	while(n1!=n2)
	{
		scanf("%d %d",&n1,&n2);
		if(n1>n2)
			printf("Decrescente\n");
		else if(n1<n2)
			printf("Crescente\n");
	}
 
    return 0;
}