#第04週的實習課程式

## 第一題 進階題:除惡務盡

```C
#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000];
	scanf("%s",&s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]!='2')
	{
		printf("%c",s[i]);
	}	
	}
	printf("\n");
}
```

## 第二題 進階題:擲骰統計

```C
#include <stdio.h>
#include <string.h>
int main()
{
	char s[1000];
	int a=0,b=0,c=0,d=0,e=0,f=0;
	scanf("%s",&s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]=='1')
		{
			a++;
		}
		if(s[i]=='2')
		{
			b++;
		}
		if(s[i]=='3')
		{
			c++;
		}
		if(s[i]=='4')
		{
			d++;
		}
		if(s[i]=='5')
		{
			e++;
		}
		if(s[i]=='6')
		{
			f++;
		}
	}
	printf("1:%d\n",a);
	printf("2:%d\n",b);
	printf("3:%d\n",c);
	printf("4:%d\n",d);
	printf("5:%d\n",e);
	printf("6:%d\n",f);
}
```

## 第三題 進階題:函數找整數的最大數字

```C
#include <stdio.h>
int main()
{
	int n,a,b=0;
	scanf("%d",&n);
	while(n!=0)
	{
		a=n%10;
		if(a>b)
		{
			b=a;
		}
		n=n/10;
	}
	printf("[%d]",b);
  }
  ```
  
## 第四題 進階題:星星等腰三角形
 
 ```C
#include <stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}
	for(j=1;j<=(2*i-1);j++)
	{
		printf("*");
	}
		printf("\n");
	}
}
```

## 第五題 基礎題:分開整數的每個數字
 
```C
#include <stdio.h>
int main()
{
	int a,b,c,d,e,num;
	scanf("%d",&num);
	a=(num/10000);
	num=num-a*10000;
	b=(num/1000);
	num=num-b*1000;
	c=(num/100);
	num=num-c*100;
	d=(num/10);
	num=num-d*10;
	e=num;
	num=num-e;
	printf("%d   %d   %d   %d   %d",a,b,c,d,e);
}
```

## 第六題 基礎題:字元判別

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
	{
		printf("U");
	}
	else if(a[i]>='a' && a[i]<='z')
	{
		printf("L");
	}
	else if(a[i]>='0' && a[i]<='9')
	{
		printf("D");
	}
	else printf("O");
	}
}
```

## 第七題 基礎題:數字之首

```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	while(n>=10)
	{
		n=n/10;
	}
	printf("%d",n);
}
```

## 第八題 基礎題:輸出從0到N的偶數

```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		if(i%2==0)
		printf("%d ",i);
	}
}
```
