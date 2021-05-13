第五題 進階題:判斷平方數

#include <stdio.h>
int main()
{
	int n,a,ans=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			a=n/i;
			if(a==i)
			{
				ans=1;
				break;
			}
		}
	}
		if(ans==1)
		{
			printf("%d",a);
		}
		else printf("%d",0);
}
