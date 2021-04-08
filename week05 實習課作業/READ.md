#第05週的實習課程式

## 第一題 進階題:反序數字

```C
#include <stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int b=a;
	int ans=0;
	while(b>0)
	{
		ans=ans*10+b%10;
		b=b/10;
	}
	
	printf("%d+%d=%d\n",a,ans,a+ans);
}
```

## 第二題 進階題:絕對值函數

```C
#include <stdio.h>
int f(int n)
{
	if(n>0)
	{
		n=n;
	}
	else if(n=n*-1);
	return n;
}
int main(void)
{
	int n;
	scanf("%d",&n);
	printf("[%d]",f(n));
	return 0;
}
```

## 第三題 基礎題:N數之和

```C
#include <stdio.h>
int a[10];
int main()
{
	int N;
	int ans=0;
	scanf("%d",&N);
	for(int i=0;i<=N;i++)
	{
		scanf("%d",&a[i]);
		ans+=a[i];
	}
	printf("%d\n",ans);
}
```

## 第四題 基礎題:三數極大

```C
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && b>c)
	{
		printf("%d",a);
	}
	else if(b>c && c>a)
	{
		printf("%d",b);
	}
	else if(c>b && b>a)
	{
		printf("%d",c);
	}
	else if(c>a && a>b)
	{
		printf("%d",c);
	}
	else if(b>a && a>c)
	{
		printf("%d",b);
	}
	else if(a>c && c>b)
	{
		printf("%d",a);
	}
	printf("\n");
}
```

## 第五題 基礎題:計算商數

```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d\n",a/b);
}
```
