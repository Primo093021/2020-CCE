第三題 進階題:計算陣列的平方值
#include <stdio.h>
int main()
{
	int a[10],i,n;
	scanf("%d ",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");
}