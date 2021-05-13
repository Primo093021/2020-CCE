#第11週的實習課程式

## 第一題 進階題:字串中的數字個數

```C
#include <stdio.h>
int main()
{
	char a[100];
	scanf("%s",a);
	int ans=0;
	for(int i=0;a[i]!='\0';i++)
	{
		if(a[i]>='0' && a[i]<='9')
		{
			ans++;
		}
	}
	printf("%d",ans);
}
```

## 第二題 進階題:利用自訂函式最大值max與最小值min求出兩者之差

```C
#include<iostream>
using namespace std;
int max(int a,int b,int c,int d)
{
	int max=0;
	if(a>b && a>c && a>d)
	{
		max=a;
	}
	else if(b>a && b>c && b>d)
	{
		max=b;
	}
	else if(c>a && c>b && c>d)
	{
		max=c;
	}
	else if(d>a && d>c && d>b)
	{
		max=d;
	}
	return max;
}
int min(int a,int b,int c,int d)
{
	int min=0;
	if(a<b && a<c && a<d)
	{
		min=a;
	}
	else if(b<a && b<c && b<d)
	{
		min=b;
	}
	else if(c<a && c<b && c<d)
	{
		min=c;
	}
	else if(d<a && d<c && d<b)
	{
		min=d;
	}
	return min;
}
int main(){
  int a,b,c,d;cin>>a>>b>>c>>d;
  cout<<(max(a,b,c,d)-min(a,b,c,d));
  return 0;
}
/* 上方C++ main 函式 等同於 下方 C 的 main 函式
int main(void){
  int a, b, c, d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  printf("%d",  max(a,b,c,d) - min(a,b,c,d) );
  return 0;
}
*/
```

## 第三題 進階題:奇數之和

```C
#include <stdio.h>
int main()
{
	int N;
	scanf("%d",&N);
	int ans=0;
	for(int i=1;i<=N;i++)
	{
		if(i%2!=0)
		{
			ans=ans+i;
		}
	}
	printf("%d",ans);
}
```

## 第四題 進階題:兩數間可被7整除的數

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
		if(i%7==0)
		{
			printf("%d ",i);
		}
	}
}
```

## 第五題 基礎題:整數二元四則運算

```C
#include <stdio.h>
int main()
{
	int a,b;
	char c;
	scanf("%d %c %d",&a,&c,&b);
	if(c=='+')
	{
		printf("%d",a+b);
	}
	else if(c=='-')
	{
		printf("%d",a-b);
	}
	else if(c=='*')
	{
		printf("%d",a*b);
	}
	else if(c=='/')
	{
		printf("%d",a/b);
	}
}
```

## 第六題 基礎題:幾日為星期幾

```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n<=7)
	{
		printf("%d",n-1);
	}
	else if(n>7)
	{
		if(n%7==0)
		{
			printf("6");
		}
		else if(n%7!=0)
		{
			printf("%d",(n%7)-1);
		}
	}
}
```

## 第七題 基礎題:零錢總額

```C
#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	printf("%d",a*50+b*5+c*1);
}
```

## 第八題 基礎題:兩數平方差

```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d",a*a-b*b);
}
```
