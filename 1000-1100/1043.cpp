#include <stdio.h>
 
int main() {
 
	float a, b, c, perimetro, area;
	scanf("%f %f %f",&a,&b,&c);
	if(a> b-c && a>c-b && a<b+c)
	{
		if(b>a-c && b>c-a && b<a+c)
		{
			if(c>a-b && c>b-a && c<b+a)
			{
				printf("Perimetro = %.1f\n",a+b+c);
			}
			else
			{
				printf("Area = %.1f\n",(a+b)*c/2);
			}
		}
		else
		{
			printf("Area = %.1f\n",(a+b)*c/2);
		}
	}
	else
	{
		printf("Area = %.1f\n",(a+b)*c/2);
	}
 
    return 0;
}