#include <stdio.h>
 
int main() {
 
	int time, hours, min, sec;
	scanf("%d",&time);
	hours = time/3600;
	time = time%3600;
	min = time/60;
	time = time%60;
	sec = time;
	printf("%d:%d:%d\n",hours,min,time);
 
    return 0;
}