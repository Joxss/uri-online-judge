#include <stdio.h>
 
int main() {
 
	float salary, bonus, ret;
	scanf("%f",&salary);
	if(salary>=0 && salary<=2000)
	{
		printf("Isento\n");
	}
	else if(salary>2000 && salary<=3000)
	{
		ret = salary - 2000;
		bonus = ret * 0.08;
		printf("R$ %.2f\n",bonus);
	}
	else if(salary>3000 && salary<=4500)
	{
		ret = salary - 3000;
		bonus = ret * 0.18 + 1000 * 0.08;
		printf("R$ %.2f\n",bonus);
	}
	else
	{
		ret = salary - 4500;
		bonus = ret*0.28 + 1500*0.18 + 1000*0.08;
		printf("R$ %.2f\n",bonus);
	}
 
    return 0;
}