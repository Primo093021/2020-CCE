#第14週的實習課程式

## 第一題 進階題:奇數反流

```C
#include <stdio.h>
int a[100];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=n;i>=1;i--)
	{
		if(a[i]%2!=0)
		{
			printf("%d ",a[i]);
		}
	}
}
```

## 第二題 基礎題:大位王

```C
#include <stdio.h>
int main()
{
	char c;
	scanf("%c",&c);
	if(c==' ') scanf("%c",&c);
	if(c=='-') scanf("%c",&c);
	printf("%c\n",c);
}
```

## 第三題 基礎題:輸入西元y年，判斷該y年是否為閏年

```C
#include <stdio.h>
int main()
{
	int y;
	scanf("%d",&y);
	int ans=0;
	if(y%400==0) ans=1;
	if(y%100==0) ans=0;
	if(y%4==0) ans=1;
	if(ans==1) printf("%d is a leap year.\n",y);
	else printf("%d is not a leap year.\n",y);
}
```

## 第四題 基礎題:把數字倒著印出來

```C
#include <stdio.h>
int a[10];
int main()
{
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=9;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
}
```

## 第五題 基礎題:區間測速

```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int ans=0;
	ans+=60*60*1.2/n;
	printf("%d",ans);
}
```
