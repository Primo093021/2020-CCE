第五題 基礎題:正整數平方總和

#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		ans+=i*i;
	}
	printf("%d",ans);
}