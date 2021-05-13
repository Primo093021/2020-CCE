第七題 進階題:三數組合

#include <stdio.h>
int main()
{
	int a[3];
	for(int i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<3;j++)
		{
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("%d",a[0]*100+a[1]*10+a[2]+1);
}
