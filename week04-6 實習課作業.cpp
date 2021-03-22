第六題 基礎題:字元判別

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
	{
		printf("U");
	}
	else if(a[i]>='a' && a[i]<='z')
	{
		printf("L");
	}
	else if(a[i]>='0' && a[i]<='9')
	{
		printf("D");
	}
	else printf("O");
	}
}
