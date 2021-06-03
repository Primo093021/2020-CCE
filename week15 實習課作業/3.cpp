第三題 基礎題:水杯接水

#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int ans=a/b;
	if(a%b>0) ans++;
	printf("%d",ans);
}
