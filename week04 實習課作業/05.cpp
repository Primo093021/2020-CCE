第五題 基礎題:分開整數的每個數字

#include <stdio.h>
int main()
{
	int a,b,c,d,e,num;
	scanf("%d",&num);
	a=(num/10000);
	num=num-a*10000;
	b=(num/1000);
	num=num-b*1000;
	c=(num/100);
	num=num-c*100;
	d=(num/10);
	num=num-d*10;
	e=num;
	num=num-e;
	printf("%d   %d   %d   %d   %d",a,b,c,d,e);
}
