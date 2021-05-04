第二題 進階題:字串長度

#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100];
	int ans=0;
	scanf("%s",a);
	scanf("%s",b);
	if(strlen(a)>strlen(b))
	{
		ans=1;
	}
	else if(strlen(a)<strlen(b))
	{
		ans=-1;
	}
	else if(strlen(a)==strlen(b))
	{
		if(strcmp(a,b)>0)
		{
			ans=1;
		}
		else if(strcmp(a,b)<0)
		{
			ans=-1;
		}
		else if(strcmp(a,b)==0)
		{
			ans=0;
		}
	}
		printf("%d",ans);
}