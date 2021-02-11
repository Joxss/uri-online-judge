#include <stdio.h>
 
int main() {
 
	int code[2],num[2], i;
	float price[2], valor;
	for(i=0;i<2;i++)
	{
		scanf("%d %d %f",&code[i], &num[i], &price[i]);
	}
	valor = num[0] * price[0] + num[1] * price[1];
	printf("VALOR A PAGAR: R$ %.2f\n",valor);
 
    return 0;
}