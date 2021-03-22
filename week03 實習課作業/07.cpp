第七題 基礎題:兩數間可被5整除的整數
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
		if(i%5==0)
		{
			printf("%d\n",i);
		}
	}
}
