#第16週的實習課程式

## 第一題 進階題:大於漸增數列總和之最小整數

```C
#include <stdio.h>
int main()
{
	int N,sum=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		sum+=i;
		if(sum>N)
		{
			printf("%d",i);
			break;
		}
	}
}
```

## 第二題 進階題:計算級數的值

```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	for(int i=0;i<=n;i++)
	{
		ans+=2*i+1;
	}
	printf("f(%d)=%d",n,ans);
}
```

## 第三題 進階題:拆解輸入的正整數

```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=20000;i*=10)
	{
		int now=n%10;
		printf("%d ",now*i);
		n=n/10;
		if(n==0) break;
	}
}
```

## 第四題 基礎題:計算一組任意數目的整數的總和

```C
#include <stdio.h>
int main()
{
	int ans=0;
	while(1)
	{
		int now;
		scanf("%d",&now);
		if(now==0) break;
		if(now>0) ans+=now;
	}
	printf("%d",ans);
}
```

## 第五題 基礎題:整數最大值、最小值

```C
#include <stdio.h>
int main()
{
	int max,min,now;
	scanf("%d%",&now);
	max=now;
	min=now;
	while(1)
	{
		int now;
		scanf("%d",&now);
		if(now==0) break;
		if(now>max) max=now;
		if(now<min) min=now;
	}
	printf("[%d,%d]",min,max);
}
```
