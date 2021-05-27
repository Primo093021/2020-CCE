第三題 進階題:區間測速-超速之王

#include <stdio.h>
int main()
{
	int n=0;
	int fast=99999;
	for(int i=1;i<=10;i++)
	{
		int now;
		scanf("%d",&now);
		if(now<fast)
		{
			n=i;
			fast=now;
		}
	}
	int ans=60*60*1.2/fast;
	printf("%d %d",n,ans);
}