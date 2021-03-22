第一題 進階題:反序數字

#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=a;
	int ans=0;
	while(b>0)
	{
		ans=ans*10+b%10;
		b=b/10;
	}
	
	printf("%d+%d=%d\n",a,ans,a+ans);
}
