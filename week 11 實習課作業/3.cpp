第三題 進階題:奇數之和

#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int ans=0;
	for(int i=1;i<=N;i++)
	{
		if(i%2!=0)
		{
			ans=ans+i;
		}
	}
	printf("%d",ans);
}