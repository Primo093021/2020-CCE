# 2020-CCE

#第01週的實習課程式

## 第一題 進階題:分式化簡

```C
#include <stdio.h>
int main()
{
	int m,n,i;
	scanf("%d%d",&m,&n);  /*輸入分母及分子*/
	for(i=m;i>=1;i--)
	{
		if((m%i==0) && (n%i==0))  /*分母不可為0*/
		{
			m=m/i;
			n=n/i;
		}
	}
	printf("%d %d\n",m,n);
}
```

## 第二題 進階題:讀入整數反序列印

```C
#include <stdio.h>
int a[10]={};
int main()
{
	for(int i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]==0)  /*輸入0才會結束*/
		{
			 break;
		}
	}
	for(int i=9;i>=0;i--)  /*不超過10個正整數，並且反轉數字*/
	{
		if(a[i]!=0)
		{
			printf("%d ",a[i]);
		}
	}
	printf("\n");
}
```
## 第三題 進階題:A的B次方函數

```C
#include <stdio.h>
int MYPOWER(int a,int b)
{
	int ans=1;
	for(int i=1;i<=b;i++)
	{
		ans=ans*a;
	}
	return ans;
}
int main(void)
{
	int a,b;
	scanf("%d%d",&a,&b);
	printf("[%d]",MYPOWER(a,b));
	return 0;
}
```

## 第四題 進階題:漸增數列相增

```C
#include <stdio.h>
int main()
{
	int n,ans=0;
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		ans=ans+(i-1)*i;
	}
		printf("%d\n",ans);
}
```

## 第五題 基礎題:找零錢

```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int coin50=n/50;
	int coin5=(n%50)/5;
	int coin1=(n%5);
	printf("%d=50*%d+5*%d+1*%d\n",n,coin50,coin5,coin1);
}
```

## 第六題 基礎題:因數個數

```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int space=0;
	for(int i=1;i<=n;i++)
	{
		if(n%i==0)  /*如果能整除就是因數*/
		{
			space++;
		}
	}
	printf("%d\n",space);
}
```

## 第七題 基礎題:找倍數

```C
#include <stdio.h>
int a[10]={};
int main()
{
	int space=0;
	int n;
	for(int i=0;i<10;i++)  /*連續輸入10個整數*/
	{
		scanf("%d",&a[i]);
		if(a[i]%3==0)  /*如果能整除3就是因數*/
		{
			space++;
		}
	}
	printf("%d\n",space);
}
```

## 第八題 基礎題:整數轉換為等級

```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	if(n>=90) /*大於90分*/
	{
		printf("A\n");
	}
	else if(n>=80) /*80分以上，90分以下*/
	{
		printf("B\n");
	}
	else if(n>=60) /*60分以上，80分以下*/
	{
		printf("C\n");
	}
	else printf("F\n"); /*低於60分以下的*/
}
```

#第02週 程式設計二上課內容

## 1. 試著使用指標 *p , 把變數n1 的值改掉

```C
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    return 0;
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week02%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/01.png?raw=true)
## 2. 試著使用指標 *p2 , 把變數n3 的值改掉

```C
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p=&n1;
    *p=200;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p2=&n3;
    *p2=300;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    return 0;
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week02%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/02.png?raw=true)
## 3. 試著先 p2=p1, 然後 *p2=400, 再印出來。

```C
#include <stdio.h>
int main()
{
    int n1=10,n2=20,n3=30;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p=&n1;
    *p=200;              /*p1裡面放的是n1的住址 &n1*/
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    int *p2=&n3;
    *p2=300;             /*p2裡面放的是n3的住址 &n3*/
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    p2=p;                /*p2叛逃，改存p1裡面的東西*/
    *p2=400;
    printf("n1:%d n2:%d n3:%d\n",n1,n2,n3);
    return 0;
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week02%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/03.png?raw=true)
## 4.現在改用陣列 int n[3]={10, 20, 30}, 再用指標, 去改裡面的值

```C
#include <stdio.h>
int main()
{
    int n[3]={10,20,30};
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
    int *p=&n[0];
    *p=200;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
    int *p2=&n[2];
    *p2=300;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);
    p2=p;
    *p2=400;
    printf("n[0]:%d n[1]:%d n[2]:%d\n",n[0],n[1],n[2]);

    return 0;
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week02%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/04.png?raw=true)

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

#第03週 程式設計二上課內容
## 1.老師示範 int *p = &a[2]; *p=222; p = p + 2; *p = 666;  到底發生了什麼事? 請畫圖解釋
```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
int main()
{
    int *p=&a[2];
    *p=222;

    p=p+2;
    *p2=666;
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week03%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/01.png?raw=true)

## 2.老師示範 int *p = &a[2]; *p=222; p = p + 2; *p = 666; p--; *p=555;

```C
#include <stdio.h>
int a[5]={0,10,20,30,40};
void printAll()
{
    for(int i=0;i<5;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int *p=&a[2];
    *p=222;
            printAll();

    p=p+2;
    *p2=666;
            printAll();

    p--;
    *p2=555;
            printAll();
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week03%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/02.JPG?raw=true)

## 3.請畫出 指標的宣告 int *p=&a[2]; 及指標的使用 p = &a[2] 

```C
#include <stdio.h>
int a[10]={0,10,20,30,40,50,60,70,80,90};
void printAll()
{
    for(int i=0;i<10;i++)
    {
        printf("%3d ",a[i]);
    }
    printf("\n");
}
int main()
{
    int *p=&a[2];
    *p=200;
            printAll();

    int *p2=p+4;
    *p2=666;
            printAll();

    p2--;
    *p2=555;
            printAll();
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week03%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/03.PNG?raw=true)

## 4.今天教最重要的是 malloc(), 它是什麼呢? 會幫你準備 memory (allocate memory)。請用老師傳給你的圖, 自己再畫一次, 增加印象。

```C
#include <stdio.h>
#include <stdlib.h>
int a[10];
int main()
{
    int b[10];
    int *p=(int*) malloc(sizeof(int)*10 );
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week03%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/04.PNG?raw=true)

#第04週 程式設計二上課內容
## 1.請跟著老師練習: struct DATA { float x, y, z; }; 結構的宣告、定義

```C
#include <stdio.h>
struct DATA
{
    float x,y,z;
}
int main()
{

}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week04%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/01.png?raw=true)

## 2.請跟著老師練習: 結構的使用, 把變數的 x, y, z 用小數點拿出來用

```C
#include <stdio.h>
struct DATA ///宣告
{
    float x,y,z;///定義裡面有...
} point1;
/// point1 是變數，長得像DATA
/// DATA裡面有x,y,z
int main()
{
    point1.x=3;///使用(裡面的值)
    point1.y=5;///使用
    point1.z=7;///使用
    printf("%f %f %f\n",point1.x,point1.y,point1.z);
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week04%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/02.png?raw=true)

## 3.請跟著老師練習: 很多結構的陣列, 看如何使用

```C
#include <stdio.h>
struct DATA ///宣告
{
    float x,y,z;///定義裡面有...
} point1;
struct DATA points[5];
/// point1 是變數，長得像DATA
/// DATA裡面有x,y,z
int main()
{
    ///int b;
    ///int a[5];
    for(int i=0;i<5;i++)
    {
        points[i].x=i*10;
        points[i].y=20;
        points[i].z=0;
        printf("%f %f %f\n",points[i].x,points[i].y,points[i].z);
    }
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week04%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/03.png?raw=true)

## 4.請跟著老師練習: 很多結構的陣列, 看如何使用

![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week04%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/04.png?raw=true)

## 5.請跟著老師練習: 很多結構的陣列, 看如何使用

![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week04%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/05.png?raw=true)

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

#第05週 程式設計二上課內容
## 0.老師以今天考試「除惡務盡」為例, 示範了2種寫法, 其中一種是用字串的for迴圈來印。這種字串的 for迴圈很重要 for(int i=0; line[i]!=0; i++){...} 請你把程式寫出來, 並且標示 line[i]!=0 的地方 ( 0其實就是'\0')

```C
#include <stdio.h>
char line[20]="233233233233233233";
int main()
{
    char *p=line;
    for(int i=0;line[i]!=0;i++)
    {
        p=&line[i];
        char c=line[i];
        if(c!='2') printf("%c",c);
    }
    printf("\n");
}
```
![]()

## 1.老師重新複習 字串的宣告: char line[10]="decline"; char line2[10]={ 'p', 'r', 'o', 'p', 'e', 'r', '\0' }; 讓大家多做練習。請練習吧! 重點是, 你有看到在字串 (字元陣列) 的後面有 '\0' 這個東西, 我們叫它「字串結尾」, 課本有畫出來過哦!

```C
#include <stdio.h>
int main()
{
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};
    printf("%s\n",line);
    printf("%s\n",line2);
}
```
![]()

## 2.老師把上面的程式, 加2行新的: char line3[]="majority"; char line4[]={'m','a','j','o','r','i','t','y'} 然後就在 printf("你知道嗎, 竟然出事了===%s==\n", line4);

```C
#include <stdio.h>
///要從簡單開始，慢慢增加，並且讓C Tutor可協助教學
///本週有2個主題可以選:2D 陣列(比較有接上週進度)
///vs. 字串排序(比較有時事的感覺) vs.CPE(時事&簡單)
///字串剛好可以接在2D 陣列後面教
int main()
{///(1)先了解什麼是字串
    char line[10]="decline";
    char line2[10]={'p','r','o','p','e','r','\0'};

    printf("%s\n",line);
    printf("%s\n",line2);

    ///(2)了解字串結尾是'\0'你相信嗎?這是line4:==%s==\n
    char line3[]="majority這是好的，沒問題，要多長有多長";
    char line4[]={'m','a','j','o','r','i','t','y'};
    printf("%s\n",line3);

    printf("你相信嗎?這是line4:==%s==\n",line4);
}
```
![]()

## 3.老師示範 char line[5][10] = {"decline", "proper", "majority", "bullet", "shop"}; 並且教大家 「左邊」「右邊」的技巧。請在 CodeBlocks 畫出來

```C
#include <stdio.h>
///要從簡單開始，慢慢增加，並且讓C Tutor可協助教學
///本週有2個主題可以選:2D 陣列(比較有接上週進度)
///vs. 字串排序(比較有時事的感覺) vs.CPE(時事&簡單)
///字串剛好可以接在2D 陣列後面教
int main()
{///(3)了解什麼是"很多"字串
    char line[5][10]={"decline","proper","majority","bullet","shop"};
    char *p;
    for(int i=0;i<5;i++)
    {
        p=line[i];
        printf("%s\n",line[i]);
    }
}
```
![]()

## 4.老師示範 char line[5][10] = {"decline", "proper", "majority", "bullet", "shop"}; 並且教大家 「左邊」「右邊」的技巧。請在 CodeBlocks 畫出來

```C
#include <stdio.h>
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int main()
{
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
```
![]()

## 5.老師教大家 int a[3][3]={ {1,2,3}, {4,5,6}, {7,8,9} }; 請試著畫出來

```C

```
![]()

## 6. 老師示範字串排序, 請用練習模式, 試寫出來。下週考這題

```C
#include <stdio.h>
#include <string.h>
char line[100][10];
int main()
{
	int N;
	scanf("%d",&N);
	for(int i=0;i<N;i++)
	{
		scanf("%s",line[i]);
	}
	char temp[10];
	for(int i=0;i<N;i++)
	{
		for(int i=0;i<N;i++)
		{
			for(int j=i+1;j<N;j++)
			{
				if(strcmp(line[i],line[j])>0)
				{
					strcpy(temp,line[i]);
					strcpy(line[i],line[j]);
					strcpy(line[j],temp);
				}
			}
		}
	}
	for(int i=0;i<N;i++)
		{
			printf("%s\n",line[i]);
		}
}

```
![]()
