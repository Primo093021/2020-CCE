4. ???? Part 2: ???????, ?????????

#include <stdio.h>
int a[100];
int main()
{
	int T;//Step1: Input有幾筆
	scanf("%d",&T);
	for(int t=0;t<T;t++)
	{
		int N;//Step2: Input
		scanf("%d",&N);
		for(int i=0;i<N;i++)
		{
			scanf("%d",&a[i]);
		}
		int ans=0;
		for(int k=0;k<N-1;k++)
		{
			for(int i=0;i<N-1;i++)
			{
				if(a[i]>a[i+1])
				{
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					ans++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}///Step3:印出答案
}