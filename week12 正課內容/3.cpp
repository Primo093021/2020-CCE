3. UVA 299 ????, Part 1: ??? Input, Output

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
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}///Step3:印出答案
}