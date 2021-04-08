#第03週的實習課程式

## 第一題 進階題:大小寫轉換

```C
#include <stdio.h>
#include <string.h>
int main()
{
	char a[10];
	scanf("%s",&a);
	int s=strlen(a);
	for(int i=0;i<=(s-1);i++)
{
	if(a[i]>='A' && a[i]<='Z')
	{else if(a[i]>='a' && a[i]<='z')
	{
		a[i]-=32;
	}
}
printf("%s\n",a);
}
```
## 第二題 進階題:漸增數列相加

```C
#include <stdio.h>
int main()
{
	int n,i,ans=0;
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		ans=ans+(i-1)*i;
	}
	printf("%d",ans);
	printf("\n");
}
```
## 第三題 進階題:計算陣列的平方值

```C
#include <stdio.h>
int main()
{
	int a[10],i,n;
	scanf("%d ",&n);
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
		printf("%d,",a[i]*a[i]);
	}
	printf("\n");
}
```
## 第四題 進階題:2進位轉10進位

```C
#include <stdio.h>
int main()
{
	int n=0;
	char c;
	scanf("%c",&c);
	while(c=='0' ||c=='1')
	{
		n=(n<<1)+c-'0';
		scanf("%c",&c);
	}
	printf("%d\n",n);
}
```
## 第五題 基礎題:計算幾週與幾天

```C
#include <stdio.h>
int main()
{
	int a,week,day;
	scanf("%d",&a);
	week=a/7;
	day=a%7;
	printf("%d %d\n",week,day);
}
```
## 第六題 基礎題:計程車資計算

```C
#include <stdio.h>
int main()
{
	int n,m,cost;
	scanf("%d",&n);
	if(n<=2000) cost=100;
	else
	{
		m=n-2000;
		if(m%500==0) cost=100+(m/500)*5;
		else cost=100+((m/500)+1)*5;
	}
	printf("%d\n",cost);
}
```
## 第七題 基礎題:兩數間可被5整除的整數

```C
#include <stdio.h>
int main()
{
	int min,max,i,num;
	scanf("%d%d",&min,&max);
	if(min>max)
	{
		num=min;
		min=max;
		max=num;
	}
	for(i=min;i<=max;i++)
	{
		if(i%5==0)
		{
			printf("%d\n",i);
		}
	}
}
```

## 第八題 基礎題:整數間最大距離

```C
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int max,min;
	if(a>b && a>c)
	{
		max=a;
	}
	else if(b>a && b>c)
	{
		max=b;
	}
	else if(c>a && c>b)
	{
		max=c;
	}
	if(a<b && a<c)
	{
		min=a;
	}
	else if(b<a && b<c)
	{
		min=b;
	}
	else if(c<a && c<b)
	{
		min=c;
	}
	printf("%d\n",max-min);
}
```
