第六題 基礎題:幾日為星期幾

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=7)
	{
		printf("%d",n-1);
	}
	else if(n>7)
	{
		if(n%7==0)
		{
			printf("6");
		}
		else if(n%7!=0)
		{
			printf("%d",(n%7)-1);
		}
	}
}