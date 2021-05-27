第六題 進階題:兩數之間的3倍數總和

#include <stdio.h>
int main()
{
	int a,b,ans=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		if(i%3==0) ans+=i;
	}
	printf("%d",ans);
}