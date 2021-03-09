#include <stdio.h>
 
int main() {
 
	float salary, bonus, total;
	scanf("%f",&salary);
	if(salary>=0 && salary<=400)
	{
		bonus = salary * 0.15;
		salary = salary + bonus;
		printf("Novo salario: %.2f\n",salary);
		printf("Reajuste ganho: %.2f\n",bonus);
		printf("Em percentual: 15 %%\n");
	}
	else if(salary>400 && salary<=800)
	{
		bonus = salary * 0.12;
		salary = salary + bonus;
		printf("Novo salario: %.2f\n",salary);
		printf("Reajuste ganho: %.2f\n",bonus);
		printf("Em percentual: 12 %%\n");
	}
	else if(salary>800 && salary<=1200)
	{
		bonus = salary * 0.1;
		salary = salary + bonus;
		printf("Novo salario: %.2f\n",salary);
		printf("Reajuste ganho: %.2f\n",bonus);
		printf("Em percentual: 10 %%\n");
	}
	else if(salary>1200 && salary<=2000)
	{
		bonus = salary * 0.07;
		salary = salary + bonus;
		printf("Novo salario: %.2f\n",salary);
		printf("Reajuste ganho: %.2f\n",bonus);
		printf("Em percentual: 7 %%\n");
	}
	else
	{
		bonus = salary * 0.04;
		salary = salary + bonus;
		printf("Novo salario: %.2f\n",salary);
		printf("Reajuste ganho: %.2f\n",bonus);
		printf("Em percentual: 4 %%\n");
	}
 
    return 0;
}