#第12週的實習課程式

## 第一題 進階題:數字個數

```C
#include <stdio.h>
int main()
{
	int a,n=0;
	while(scanf("%d",&a),a!=0)
	{
		n++;
	}
	printf("%d",n);
}
```

## 第二題 基礎題:剩餘啤酒有幾手又幾瓶

```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d %d",(a-b*6)/6,(a-b*6)%6);
}
```

## 第三題 基礎題:三數最小

```C
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b && b<c)
	{
		printf("%d\n",a);
	}
	else if(b<a && a<c)
	{
		printf("%d\n",b);
	}
	else if(c<a && a<b)
	{
		printf("%d\n",c);
	}
	else if(a<c && c<b)
	{
		printf("%d\n",a);
	}
	else if(b<c && c<a)
	{
		printf("%d\n",b);
	}
	else if(c<b && b<a)
	{
		printf("%d\n",c);
	}
}
```

## 第四題 基礎題:計算立方值

```C
#include <stdio.h>
int main()
{
	int a,b,c,d,e,f;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	printf("%d\n",a*a*a);
	printf("%d\n",b*b*b);
	printf("%d\n",c*c*c);
	printf("%d\n",d*d*d);
	printf("%d\n",e*e*e);
	printf("%d\n",f*f*f);
}
```

## 第五題 進階題:判斷平方數

```C
#include <stdio.h>
int main()
{
	int n,a,ans=0;
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			a=n/i;
			if(a==i)
			{
				ans=1;
				break;
			}
		}
	}
		if(ans==1)
		{
			printf("%d",a);
		}
		else printf("%d",0);
}
```

## 第六題 進階題:計算質數個數

```C
#include <stdio.h>
int main()
{
	int a,b,ans=0,n;
	scanf("%d %d",&a,&b);
	for(int i=a;i<=b;i++)
	{
		n=1;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0 && j!=1 && j!=i)
			{
				n=0;
			}
		}
		if(n==1)
		{
			ans++;
		}
	}
	printf("%d",ans);
}
```

## 第七題 進階題:三數組合

```C
#include <stdio.h>
int main()
{
	int a[3];
	for(int i=0;i<3;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<3;i++)
	{
		for(int j=i+1;j<3;j++)
		{
			if(a[i]<a[j])
			{
				int temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("%d",a[0]*100+a[1]*10+a[2]+1);
}
```

## 第八題 基礎題:找千位數

```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	printf("%d",(n%10000)/1000);
}
```
