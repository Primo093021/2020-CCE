#第13週的實習課程式

## 第一題 進階題:求11+22+33+...+nn

```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=0;i<=n;i++)
	{
		ans+=i*11;
	}
	printf("%d",ans);
}
```

## 第二題 進階題:求兩數之最大公因數

```C
#include<iostream>
using namespace std;
int GCD(int a, int b)
{
	if(a==0) return b;
	if(b==0) return a;
	return GCD(b,a%b);
}
int main(){
  int a,b;cin>>a>>b;
  cout<<GCD(a,b)<<endl;
  return 0;
}
```

## 第三題 進階題:區間測速-超速之王

```C
#include <stdio.h>
int main()
{
	int n=0;
	int fast=99999;
	for(int i=1;i<=10;i++)
	{
		int now;
		scanf("%d",&now);
		if(now<fast)
		{
			n=i;
			fast=now;
		}
	}
	int ans=60*60*1.2/fast;
	printf("%d %d",n,ans);
}
```

## 第四題 進階題:10數排序，從大到小排好

```C
#include <stdio.h>
int a[10];
int main()
{
	int i,j,temp;
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<10;i++)
	{
		printf("%d ",a[i]);
	}
}
```

## 第五題 基礎題:正整數平方總和

```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		ans+=i*i;
	}
	printf("%d",ans);
}
```

## 第六題 進階題:兩數之間的3倍數總和

```C
#include <stdio.h>
int main()
{
	int a,b,ans=0;
	scanf("%d%d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		if(i%3==0) ans+=i;
	}
	printf("%d",ans);
}
```

## 第七題 基礎題:判斷座標的象限

```C
#include <stdio.h>
int main()
{
	int a,b,ans;
	scanf("%d%d",&a,&b);
	if(a>0 && b>0) ans=1;
	if(a<0 && b>0) ans=2;
	if(a<0 && b<0) ans=3;
	if(a>0 && b<0) ans=4;
	printf("%d\n",ans);
}
```

## 第八題 基礎題:輸入n(n>0)，求n之所有因數和

```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(n%i==0) 
		{
			ans+=i;
		}
	}
	printf("%d",ans);
}
```
