## 3. 為了熟悉, 請你把上週考試的字串排序, 用 qsort() 配合你寫的 compare() 及 strcmp() 來再做一次!!

```C
#include <stdio.h>
#include <string.h>
char a[100][10];
char temp[10];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%s",a[i]);
	}
	for(int i=0;i<N;i++)
	{
		for(int j=i+1;j<N;j++)
		{
			if(strcmp(a[i],a[j])>0)
			{
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
		}
	}
	for(int i=0;i<N;i++)
	{
		printf("%s\n",a[i]);
	}
}


```