#第08週 程式課上課內容

## 1.UVA 10226 先改測試資料, 改成1大筆。接著把 T 及 for(int t=0; t<T; t++) 寫出來。裡面用 gets() 把樹名 tree[i] 讀進來, 然後印出來

```C
#include <stdio.h>
#include <string.h>
char tree[1000000][32];
int main()
{
	int T;
	scanf("%d\n\n",&T);
	//後面要吃掉2個跳行!!
	//依照測驗資料有T大筆
	for(int t=0;t<T;t++)
	{
		int N=0;//有幾行讓進來??有幾個棵樹
		for(int i=0;   ;i++)
		{
			gets(tree[i]);
			if(strcmp(tree[i],"")==0)
			{
				N=i;//要記錄現在的i
				break;//就可以離開了!!
			}
		}
	for(int i=0;i<N;i++)
	{
		printf("%s\n",tree[i]);
	}
	}
}
```
![]()

## 2.接序上題, UVA 10226 我們(中間插入) 字串排序 的部分

```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000][32];
int compare(const void*p1,const void*p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	//後面要吃掉2個跳行!!
	//依照測驗資料有T大筆
	for(int t=0;t<T;t++)
	{
		int N=0;//有幾行讓進來??有幾個棵樹
		for(int i=0;   ;i++)
		{
			gets(tree[i]);
			if(strcmp(tree[i],"")==0)
			{
				N=i;//要記錄現在的i
				break;//就可以離開了!!
			}
		}
		qsort(tree,N,32,compare);
		for(int i=0;i<N;i++)
		{
			printf("%s\n",tree[i]);
		}
	}
}

```
![]()

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
![]()

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
![]()

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
![]()

## 6. UVA 10266 的數數字收尾, 老師示範了一下(和上一題很像), 請你跟著試看看。

```C
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char tree[1000000][32];
int compare(const void*p1,const void*p2)
{
	return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int T;
	scanf("%d\n\n",&T);
	//後面要吃掉2個跳行!!
	//依照測驗資料有T大筆
	for(int t=0;t<T;t++)
	{
		int N=0;//有幾行讓進來??有幾個棵樹
		for(int i=0;   ;i++)
		{
			gets(tree[i]);
			if(strcmp(tree[i],"")==0)
			{
				N=i;//要記錄現在的i
				break;//就可以離開了!!
			}
		}
		qsort(tree,N,32,compare);
		int ans=1;
		printf("%s ",tree[0]);
		for(int i=0;i<N-1;i++)
		{
			if(strcmp(tree[i],tree[i+1])!=0)
			{
				printf("%.4f\n", 100*ans/(float)N);
				printf("%s ", tree[i+1]);
				ans=1;
			}else 
			{
				ans++;
			}
		}
			printf("%.4f\n", 100*ans/(float)N);
		}
	}

```
![]()
