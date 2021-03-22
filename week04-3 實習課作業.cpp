第三題 進階題:函數找整數的最大數字

#include <stdio.h>
int main()
{
	int n,a,b=0;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		if(a>b)
		{
			b=a;
		}
		n=n/10;
	}
	printf("[%d]",b);
  }