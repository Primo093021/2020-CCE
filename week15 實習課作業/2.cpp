第二題 進階題:秒數換算

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int t1=n/60/60;
	int t2=n/60%60;
	int t3=n%60;
	printf("%02d:%02d:%02d",t1,t2,t3);
}
