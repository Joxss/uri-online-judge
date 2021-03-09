#include <stdio.h>
 
int main() {
 
	int start, end, tempo;
	scanf("%d %d",&start,&end);
	if(start<end)
	{
		tempo = (start - end)*-1;
		printf("O JOGO DUROU %d HORA(S)\n",tempo);
	}
	else
	{
		tempo = 24 - start + end;
		printf("O JOGO DUROU %d HORA(S)\n",tempo);
	}
 
    return 0;
}