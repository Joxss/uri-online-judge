#include <stdio.h>
 
int main() {
 
	int time, speed;
	float dis;
	scanf("%d",&time);
	scanf("%d",&speed);
	dis = ((float)time * (float)speed)/12;
	printf("%.3f\n",dis);

    return 0;
}