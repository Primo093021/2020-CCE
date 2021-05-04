第四題 進階題:判斷迴文

#include <stdio.h>
#include <string.h>
int main()
{
	char a[100]={};
	scanf("%s",a);
	int ans=0;
	for(int i=1;i<=strlen(a)-i;i++)
	{
		if(a[i-1]==a[strlen(a)-i])
		{
			ans=1;
		}
		else if(a[i-1]!=a[strlen(a)-i])
		{
			ans=0;
		}
	}
	if(ans==1)
	{
		printf("YES");
	}
	else if(ans==0)
	{
		printf("NO");
	}
}
	//strlen數字，加上陣列變成字元
