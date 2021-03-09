#include <stdio.h>
 
int main() {
 
	int n, i, x, ci=0, co=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		if(x>=10 && x<=20)
			ci++;
		else
			co++;	
	}
	printf("%d in\n",ci);
	printf("%d out\n",co);
 
    return 0;
}