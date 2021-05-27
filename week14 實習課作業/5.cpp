第五題 基礎題:區間測速

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	ans+=60*60*1.2/n;
	printf("%d",ans);
}