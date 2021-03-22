第二題 進階題:漸增數列相加
#include <stdio.h>
int main()
{
	int n,i,ans=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		ans=ans+(i-1)*i;
	}
	printf("%d",ans);
	printf("\n");
}
