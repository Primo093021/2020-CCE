第四題 進階題:10數排序，從大到小排好

#include <stdio.h>
int a[10];
int main()
{
	int i,j,temp;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
}