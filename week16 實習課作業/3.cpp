第三題 進階題:拆解輸入的正整數

#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=20000;i*=10)
	{
		int now=n%10;
		printf("%d ",now*i);
		n=n/10;
		if(n==0) break;
	}
}