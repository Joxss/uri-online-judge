#include <stdio.h>
 
int main() {
 
	double x1, y1, x2, y2, dis, n, i;
	scanf("%lf %lf",&x1,&y1);
	scanf("%lf %lf",&x2,&y2);
	dis = (x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
	n = dis;
	for(i=0;i<10;i++)
	{
		dis = dis/2 + n/(2*dis);
	}
	printf("%.4lf\n",dis);
 
    return 0;
}