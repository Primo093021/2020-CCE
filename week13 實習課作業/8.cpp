第八題 基礎題:輸入n(n>0)，求n之所有因數和

#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0) 
		{
			ans+=i;
		}
	}
	printf("%d",ans);
}
