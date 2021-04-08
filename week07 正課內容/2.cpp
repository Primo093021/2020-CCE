2.請用瘋狂程設-練習模式, 把今天考試的「字串排序」,,改用 qsort() 快速排序寫寫看

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char a[100][10];
int compare(const void *p1,const void*p2)
{
	char *s1=(char*)p1;
	char *s2=(char*)p2;
	return strcmp(s1,s2);
}
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%s",a[i]);
	}
	
	qsort(a,N,10,compare);
	//快速排序(陣列、n個、每個有多大、比較的函式);
	
	for(int i=0;i<N;i++)
	{
		printf("%s\n",a[i]);
	}
}