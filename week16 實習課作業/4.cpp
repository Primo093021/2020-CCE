第四題 基礎題:計算一組任意數目的整數的總和

#include <stdio.h>
int main()
{
	int ans=0;
	while(1)
	{
		int now;
		scanf("%d",&now);
		if(now==0) break;
		if(now>0) ans+=now;
	}
	printf("%d",ans);
}