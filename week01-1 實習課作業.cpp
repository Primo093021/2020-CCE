第一題 進階題:分式化簡
#include <stdio.h>
int main()
{
	int m,n,i;
	scanf("%d%d",&m,&n);
	for(i=m;i>=1;i--)
	{
		if((m%i==0) && (n%i==0))
		{
			m=m/i;
			n=n/i;
		}
	}
	printf("%d %d\n",m,n);
}