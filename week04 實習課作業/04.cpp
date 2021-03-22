第四題 進階題:星星等腰三角形

#include <stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
	for(j=1;j<=(2*i-1);j++)
	{
		printf("*");
	}
		printf("\n");
	}
}
