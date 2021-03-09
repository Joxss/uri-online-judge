#include <stdio.h>
 
int main() {
 
	int cont, vezes;
	float i=0, j=1, sub;
	while(i<=2.2)
	{
		sub=0;
		for(cont=0;cont<3;cont++)
		{
			if(vezes%5==0)
			{
				printf("I=%.0f J=%.0f\n",i,j+sub);
				sub++;
			}
			else
			{
				printf("I=%.1f J=%.1f\n",i,j+sub);
				sub++;
			}
		}
		vezes++;
		i = i+ 0.2;
		j = j + 0.2;
	}
 
    return 0;
}