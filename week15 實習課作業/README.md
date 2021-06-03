#第15週的實習課程式

## 第一題 進階題:億萬富翁

```C
#include <stdio.h>
#include <string.h>
char line[1000];
int main()
{
	scanf("%s",line);
	int n=strlen(line);
	for(int i=0;i<n;i++)
	{
		if((n-i)%3==0 && i!=0) printf(",");
		printf("%c",line[i]);
	}
}
```

## 第二題 進階題:秒數換算

```C
#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int t1=n/60/60;
	int t2=n/60%60;
	int t3=n%60;
	printf("%02d:%02d:%02d",t1,t2,t3);
}
```

## 第三題 基礎題:水杯接水

```C
#include <stdio.h>
int main()
{
	int a,b;
	scanf("%d%d",&a,&b);
	int ans=a/b;
	if(a%b>0) ans++;
	printf("%d",ans);
}
```

## 第四題 基礎題:平面兩座標的面積

```C
#include <stdio.h>
int main()
{
	int x1,y1,x2,y2;
	scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
	int ans=(x1-x2)*(y1-y2);
	if(ans<0) ans=-ans;
	printf("%d",ans);
}
```

## 第五題 基礎題:整數向量相加

```C
#include <stdio.h>
int a[10],b[10];
int main()
{
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++)
	{
		scanf("%d",&b[i]);
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",a[i]+b[i]);
	}
}
```
