第三題 基礎題:輸入西元y年，判斷該y年是否為閏年

#include <stdio.h>
int main()
{
	int y;
	scanf("%d",&y);
	int ans=0;
	if(y%400==0) ans=1;
	if(y%100==0) ans=0;
	if(y%4==0) ans=1;
	if(ans==1) printf("%d is a leap year.\n",y);
	else printf("%d is not a leap year.\n",y);
}