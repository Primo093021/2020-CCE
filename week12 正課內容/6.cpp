6. 接續上題 Part 2: 看懂它的排序規則, 並把正確答案算出來

#include <stdio.h>
int a[10000];
void swap(int i,int j)
{
	int temp=a[i];
	a[i]=a[j];
	a[j]=temp;
}
int main()
{
	int N,M;
	while(scanf("%d %d",&N,&M)==2)//Step1:Input
	{
		for(int i=0;i<N;i++)
		{
			scanf("%d",&a[i]);
		}
		for(int i=0;i<N;i++)
		{
			for(int j=i+1;j<N;j++)
			{
				if(a[i]%M>a[j]%M) swap(i,j);
				if(a[i]%M==a[j]%M && a[i]%2==0 && a[j]%2!=0) swap(i,j);
				if(a[i]%M==a[j]%M && a[i]%2!=0 && a[i]<a[j]) swap(i,j);
				if(a[i]%M==a[j]%M && a[i]%2==0 && a[i]>a[j]) swap(i,j);
			}
		}
		printf("%d %d\n",N,M);
		for(int i=0;i<N;i++)//Step2:Output
		{
			printf("%d\n",a[i]);
		}
	}
}