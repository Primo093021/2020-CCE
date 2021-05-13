#第12週 程式課上課內容

## 1.UVA 10062 告訴我頻率, 使用比較簡單的寫法, 自己用2層for迴圈, 自己寫交換的程式 (老師寫錯囉... 下一個作業) 目前只完成 Part 1: 依字母的頻率, 從少到多排序

```C
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++)
	{
		int ans[256]={};        //ans[256]={0,0,0,0,0,0,0,0,0,0,...,0};
		char ascii[256];//希望有個ascii[256]={0,1,2,3,4,5,6,7,....,255};
		for(int i=0;i<256;i++) ascii[i]=i;
		for(int i=0;line[i]!=0;i++)
		{
			char c=line[i];
			ans[c]++;
		}
		for(int i=0;i<256;i++)
		{
			for(int j=i+1;j<256;j++)
			{
				if(ans[i]>ans[j])//如果順序不對，要交換
				{
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char c=ascii[i];
					ascii[i]=ascii[j];
					ascii[j]=c;
				}
			}
		}
		if(t>0) printf("\n");
		for(int i=0;i<256;i++)
		{
			if(ans[i]>0) printf("%d %d\n",ascii[i],ans[i]);
		}
	}
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week12%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/1.png?raw=true)

## 2.UVA 10062 完成 Part 2 字母的頻率相同時, 字母從大到小排序

```C
#include <stdio.h>
char line[2000];
int main()
{
	for(int t=0;gets(line);t++)
	{
		int ans[256]={};        //ans[256]={0,0,0,0,0,0,0,0,0,0,...,0};
		char ascii[256];//希望有個ascii[256]={0,1,2,3,4,5,6,7,....,255};
		for(int i=0;i<256;i++) ascii[i]=i;
		for(int i=0;line[i]!=0;i++)
		{
			char c=line[i];
			ans[c]++;
		}
		for(int i=0;i<256;i++)
		{
			for(int j=i+1;j<256;j++)
			{
				if(ans[i]>ans[j])//如果順序不對，要交換
				{
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char c=ascii[i];
					ascii[i]=ascii[j];
					ascii[j]=c;
				}
				if(ans[i]==ans[j] && ascii[i]<ascii[j])//如果順序不對，要交換
				{
					int temp=ans[i];
					ans[i]=ans[j];
					ans[j]=temp;
					char c=ascii[i];
					ascii[i]=ascii[j];
					ascii[j]=c;
				}
			}
		}
		if(t>0) printf("\n");
		for(int i=0;i<256;i++)
		{
			if(ans[i]>0) printf("%d %d\n",ascii[i],ans[i]);
		}
	}
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week12%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/2.png?raw=true)

## 3. UVA 299 交換火車, Part 1: 先解決 Input, Output

```C
#include <stdio.h>
int a[100];
int main()
{
	int T;//Step1: Input¦³´Xµ§
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
	}///Step3:¦L¥Xµª®×
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week12%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/3.png?raw=true)

## 4. 接續上題 Part 2: 完成泡泡排序法, 並把正確答案算出來

```C
#include <stdio.h>
int a[100];
int main()
{
	int T;//Step1: Input¦³´Xµ§
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
		for(int k=0;k<N-1;k++)
		{
			for(int i=0;i<N-1;i++)
			{
				if(a[i]>a[i+1])
				{
					int temp=a[i];
					a[i]=a[i+1];
					a[i+1]=temp;
					ans++;
				}
			}
		}
		printf("Optimal train swapping takes %d swaps.\n",ans);
	}///Step3:¦L¥Xµª®×
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week12%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/4.png?raw=true)

## 5. UVA 11321 排排排序, Part 1: 先解決 Input, Output

```C
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
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week12%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/5.png?raw=true)

## 6. 接續上題 Part 2: 看懂它的排序規則, 並把正確答案算出來

```C
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
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week12%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/6.png?raw=true)
