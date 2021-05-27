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

