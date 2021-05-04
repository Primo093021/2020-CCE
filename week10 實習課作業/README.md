#第10週的實習課程式

## 第一題 進階題:最大公因數gcd

```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int space=a,space2=b;
	printf("Enter two integers: \n");
	int c=a%b;
	while(c!=0)
	{
		a=b;
		b=c;
		c=a%b;
	}
	printf("The greatest common divisor of %d and %d is %d\n",space,space2,b);
}
```

## 第二題 進階題:字串長度

```C
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100];
	int ans=0;
	scanf("%s",a);
	scanf("%s",b);
	if(strlen(a)>strlen(b))
	{
		ans=1;
	}
	else if(strlen(a)<strlen(b))
	{
		ans=-1;
	}
	else if(strlen(a)==strlen(b))
	{
		if(strcmp(a,b)>0)
		{
			ans=1;
		}
		else if(strcmp(a,b)<0)
		{
			ans=-1;
		}
		else if(strcmp(a,b)==0)
		{
			ans=0;
		}
	}
		printf("%d",ans);
}
```

## 第三題 進階題:函數判斷質數

```C
#include <iostream>
using namespace std;
int prime(int n)
{
	int ans=0;
	for(int i=2;i<n;i++)
	{
		if(n%i==0)
		{
			ans=0;
			break;
		}
		else if(n!=0)
		{
			ans=1;
		}
	}
	return ans;
}
int main(){
  int n;cin>>n;
  cout<<"["<<prime(n)<<"]";
  return 0;
}
/* 上方 C++ 的 main 函數 等價於 下方 C 的 main 函數
int main(void){
    int n;
    scanf("%d", &n);
    printf("[%d]", prime(n));
    return 0;
}
*/
```
## 第四題 進階題:判斷迴文

```C
#include <stdio.h>
#include <string.h>
int main()
{
	char a[100]={};
	scanf("%s",a);
	int ans=0;
	for(int i=1;i<=strlen(a)-i;i++)
	{
		if(a[i-1]==a[strlen(a)-i])
		{
			ans=1;
		}
		else if(a[i-1]!=a[strlen(a)-i])
		{
			ans=0;
		}
	}
	if(ans==1)
	{
		printf("YES");
	}
	else if(ans==0)
	{
		printf("NO");
	}
}
	//strlen數字，加上陣列變成字元
```

## 第五題 基礎題:計算餘數及列印

```C
#include <stdio.h>
int main()
{
	int x,y;
	printf("Enter two numbers: ");
	scanf("%d%d",&x,&y);
	 printf("The remainder is %d\n",x%y);
}
```

## 第六題 基礎題:判斷正方形

```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("Enter two numbers:  ");
	if(a==b)
	{
		printf("It is a square ");
	}
	else printf("It is not a square ");
}
```

## 第七題 基礎題:將一連串整數相乘

```C
#include <stdio.h>
int main()
{
	int n,i,ans=1,x;
	printf("Enter the number of values to be processed: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		printf("Enter a value: ");
		scanf("%d",&x);
		ans=ans*x;
	}
	printf("Product of the %d values is %d",n,ans);
}
```

## 第八題 基礎題:平年月份的天數

```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n==1 || n==3 || n==5 || n==7 || n==8 || n==10 || n==12)
	{
		printf("31");
	}
	else if(n==4 || n==6 || n==9 || n==11)
	{
		printf("30");
	}
	else if(n==2)
	{
		printf("28");
	}
}
```
