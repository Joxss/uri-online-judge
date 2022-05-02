#include <stdio.h>
 
int main() {
 
	int n=0;
	while(n!=2002)
	{
		scanf("%d",&n);
		if(n!=2002)
			printf("Senha Invalida\n");
		else
			break;	
	}
	printf("Acesso Permitido\n");
 
    return 0;
}