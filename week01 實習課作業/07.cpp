第七題 基礎題:找倍數
#include <stdio.h>
int a[10]={};
int main()
{
	int space=0;
	int n;
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]%3==0)
		{
			space++;
		}
	}
	printf("%d\n",space);
}
