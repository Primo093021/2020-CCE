## 5. 數數字, 老師用本週考試的 UVA 10420 來示範如何數「國名出現幾次」,下週重考這題。

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