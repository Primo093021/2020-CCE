5. UVA 11321 排排排序, Part 1: 先解決 Input, Output

#include <stdio.h>
int a[10000];
int main()
{
	int N,M;
	while(scanf("%d %d",&N,&M)==2)//Step1:Input
	{
		for(int i=0;i<N;i++)
		{
			scanf("%d",&a[i]);
		}
		printf("%d %d\n",N,M);
		for(int i=0;i<N;i++)//Step2:Output
		{
			printf("%d\n",a[i]);
		}
	}
}