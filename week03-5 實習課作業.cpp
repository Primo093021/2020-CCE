第五題 基礎題:計算幾週與幾天
#include <stdio.h>
int main()
{
	int a,week,day;
	scanf("%d",&a);
	week=a/7;
	day=a%7;
	printf("%d %d\n",week,day);
}