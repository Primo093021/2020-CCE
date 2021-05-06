第一題 進階題:字串中的數字個數

#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",a);
	int ans=0;
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			ans++;
		}
	}
	printf("%d",ans);
}