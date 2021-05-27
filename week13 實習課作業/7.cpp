第七題 基礎題:判斷座標的象限

#include <stdio.h>
int main()
{
	int a,b,ans;
	scanf("%d%d",&a,&b);
	if(a>0 && b>0) ans=1;
	if(a<0 && b>0) ans=2;
	if(a<0 && b<0) ans=3;
	if(a>0 && b<0) ans=4;
	printf("%d\n",ans);
}