#include <stdio.h>
 
int main() {
 
	int NUMBER, hours;
	float money, SALARY;
	scanf("%d",&NUMBER);
	scanf("%d",&hours);
	scanf("%f",&money);
	SALARY = money * hours;
	printf("NUMBER = %d\n",NUMBER);
	printf("SALARY = U$ %.2f\n",SALARY);
 
    return 0;
}