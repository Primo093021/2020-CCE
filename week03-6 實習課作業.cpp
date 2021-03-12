第六題 基礎題:計程車資計算
#include <stdio.h>
int main()
{
	int n,m,cost;
	scanf("%d",&n);
	if(n<=2000) cost=100;
	else
	{
		m=n-2000;
		if(m%500==0) cost=100+(m/500)*5;
		else cost=100+((m/500)+1)*5;
	}
	printf("%d\n",cost);
}