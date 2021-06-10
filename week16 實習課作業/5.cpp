第五題 基礎題:整數最大值、最小值

#include <stdio.h>
int main()
{
	int max,min,now;
	scanf("%d%",&now);
	max=now;
	min=now;
	while(1)
	{
		int now;
		scanf("%d",&now);
		if(now==0) break;
		if(now>max) max=now;
		if(now<min) min=now;
	}
	printf("[%d,%d]",min,max);
}