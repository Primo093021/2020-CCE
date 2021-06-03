第五題 基礎題:整數向量相加

#include <stdio.h>
int a[10],b[10];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]+b[i]);
	}
}
