第二題 進階題:絕對值函數

#include <stdio.h>
int f(int n)
{
	if(n>0)
	{
		n=n;
	}
	else if(n=n*-1);
	return n;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
