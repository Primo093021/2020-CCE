第六題 進階題:計算質數個數

#include <stdio.h>
int main()
{
	int a,b,ans=0,n;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		n=1;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0 && j!=1 && j!=i)
			{
				n=0;
			}
		}
		if(n==1)
		{
			ans++;
		}
	}
	printf("%d",ans);
}
