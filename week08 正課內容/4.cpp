## 4. 為了熟悉, 請你把本週考試的字串排序, 用 qsort() 配合你寫的 compare() 及 strcmp() 來再做一次!! (不用寫到成功, 只是要你練習上週教的「字串排序」))

```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char name[2000][80];
char others[80];
int compare(const void*p1,const void*p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%s",name[i]);
		gets(others);
	}
	
	qsort(name,n,80,compare);
	for(int i=0;i<n;i++)
	{
		printf("%s\n",name[i]);
	}
}

```