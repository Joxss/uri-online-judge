#include <stdio.h>
 
int main() {
 
	int dis;
	float fuel,rend;
	scanf("%d",&dis);
	scanf("%f",&fuel);
	rend = dis / fuel;
	printf("%.3f km/l\n",rend);
 
    return 0;
}