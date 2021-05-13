第二題 基礎題:剩餘啤酒有幾手又幾瓶

#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d %d",(a-b*6)/6,(a-b*6)%6);
}