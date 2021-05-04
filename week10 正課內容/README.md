#第10週 程式設計二上課內容

## 1. 今天發現考試有同學還是不會, 所以從簡單重新練習。瘋狂程設-(左上角)CPE顆星廣場-CPE一顆星, 最上面 UVA10008, 先能讀入 n 行的字串, 再馬上印出來... 小心, 跳行

```C

#include <stdio.h>
char line[10000];
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(line);
		printf("%s\n",line);
	}
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week10%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/1.png?raw=true)

## 2. 接上題, 能每個字母做大小寫轉換嗎? 先能判斷「大寫」 「小寫」 「其他」

```C

#include <stdio.h>
char line[10000];
int ans[26];
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(line);
		for(int k=0;line[k]!=0;k++)
		{
			char c=line[k];
			if(c>='A' && c<='Z') printf("大");
			else if(c>='a' && c<='z') printf("小");
			else printf("他");
		}
	}
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week10%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/2.png?raw=true)

## 3. 接上題, 做對應的統計 ans[ c-'A' ] ++ 或 ans[ c-'a' ] ++

```C

#include <stdio.h>
char line[10000];
int ans[26];
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(line);
		for(int k=0;line[k]!=0;k++)
		{
			char c=line[k];
			//if(c>='A' && c<='Z') printf("%d ",c-'A');
			//else if(c>='a' && c<='z') printf("%d ",c-'a');
			if(c>='A' && c<='Z') ans[c-'A' ]++;
			else if(c>='a' && c<='z') ans[c-'a' ]++;
			for(int i=0;i<26;i++)
			{
				printf("%c %d\n",'A'+i,ans[i]);
			}
		}
	}
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week10%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/3.png?raw=true)

## 4. 接上題, 用個很難的排序, 把答案算出來

```C

#include <stdio.h>
char line[10000];
int ans[26];
char alphabet[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int main()
{
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(line);
		for(int k=0;line[k]!=0;k++)
		{
			char c=line[k];
			if(c>='A' && c<='Z') ans[c-'A' ]++;
			else if(c>='a' && c<='z') ans[c-'a' ]++;
		}
	}
			for(int i=0;i<26;i++)
			{
				for(int j=i+1;j<26;j++)
				{
					if(ans[i]<ans[j] ||(ans[i]==ans[j] && alphabet[i]>alphabet[j]))
					{
						int temp=ans[i];
						ans[i]=ans[j];
						ans[j]=temp;
						char c=alphabet[i];
						alphabet[i]=alphabet[j];
						alphabet[j]=c;
					}
				}
			}
			for(int i=0;i<26;i++)
			{
				if(ans[i]>0) printf("%c %d\n",alphabet[i],ans[i]);
			}
		}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week10%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/4.png?raw=true)

## 5. 接上題, 改用 qsort() 配資料結構 struct 來寫出來。好像變簡單, 其實還是很難 XD

```C

#include <stdio.h>
#include <stdlib.h>
char line[10000];
typedef struct
{
	int ans;
	char c;
}BOX;
BOX array[26];
int compare(const void *p1,const void *p2)
{
	if( ((BOX*)p1)->ans > ((BOX*)p2)->ans) return -1;
	else if( ((BOX*)p1)->ans < ((BOX*)p2)->ans) return +1;
	else if( ((BOX*)p1)->c < ((BOX*)p2)->c) return -1;
	else if( ((BOX*)p1)->c > ((BOX*)p2)->c) return +1;
	return 0;
}
int main()
{
	for(int i=0;i<26;i++) array[i].c='A'+i;
	int n;
	scanf("%d\n",&n);
	for(int i=0;i<n;i++)
	{
		gets(line);
		for(int k=0;line[k]!=0;k++)
		{
			char c=line[k];
			if(c>='A' && c<='Z') array[c-'A' ].ans++;
			else if(c>='a' && c<='z') array[c-'a' ].ans++;
		}
	}
	qsort(array,26,sizeof(BOX),compare);
			for(int i=0;i<26;i++)
			{
				if(array[i].ans>0) printf("%c %d\n",array[i].c,array[i].ans);
			}
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week10%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/5.png?raw=true)
