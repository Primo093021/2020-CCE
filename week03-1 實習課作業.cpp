第一題 進階題:大小寫轉換
#include <stdio.h>
#include <string.h>
int main()
{
	char a[10];
	scanf("%s",&a);
	int s=strlen(a);
	for(int i=0;i<=(s-1);i++)
{
	if(a[i]>='A' && a[i]<='Z')
	{else if(a[i]>='a' && a[i]<='z')
	{
		a[i]-=32;
	}
}
printf("%s\n",a);
}