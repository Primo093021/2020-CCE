第七題 基礎題:將一連串整數相乘


#include <stdio.h>
int main()
{
	int n,i,ans=1,x;
	printf("Enter the number of values to be processed: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter a value: ");
		scanf("%d",&x);
		ans=ans*x;
	}
	printf("Product of the %d values is %d",n,ans);
}
