## 1.UVA 10226 先改測試資料, 改成1大筆。接著把 T 及 for(int t=0; t<T; t++) 寫出來。裡面用 gets() 把樹名 tree[i] 讀進來, 然後印出來

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
