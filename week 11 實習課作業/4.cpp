第四題 進階題:兩數間可被7整除的數

#include <stdio.h>
int main()
{
	int min,max,i,num;
	scanf("%d%d",&min,&max);
	if(min>max)
	{
		num=min;
		min=max;
		max=num;
	}
	for(i=min;i<=max;i++)
	{
		if(i%7==0)
		{
			printf("%d ",i);
		}
	}
}