#include <stdio.h>
#include <math.h>
 
int main() {
 
	float delta, a, b, c, r1, r2;
	scanf("%f %f %f",&a,&b,&c);
	delta = b*b - 4*a*c;
	if(delta<0 || a==0)
		printf("Impossivel calcular\n");
	else
	{
		delta = sqrt(delta);
		r1 = (-b + delta)/(2*a);
		r2 = (-b - delta)/(2*a);
		printf("R1 = %.5f\n",r1);
		printf("R2 = %.5f\n",r2);
	}
 
    return 0;
}