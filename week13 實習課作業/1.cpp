第一題 進階題:求11+22+33+...+nn

#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		ans+=i*11;
	}
	printf("%d",ans);
}