#第11週 程式設計二上課內容
## 1. 老師用課本第7章第7-13頁介紹 typedef 前面是舊名字 新名字; 可以「再定義」, 請試著在 CodeBlocks 實作一下
```C
#include <stdio.h>
unsigned char c;
typedef unsigned char uchar;
uchar d;
int main()
{
    c='A';
    d=c;
    printf("%c",d);
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week11%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/1.png?raw=true)

## 2. typedef 是 struct 的好朋友, 可以把 type 變簡單, typedef struct data {char c; int ans; } DATA; 可以用簡單的名字 DATA 取代很長的 struct data。請試著在 CodeBlocks 照著實作一下

```C
#include <stdio.h>
typedef struct data
{
    char c;///哪一個字母
    int ans;///出現幾次
}DATA;
///struct data listA;
DATA listA;
int main()
{
    listA.c='A';
    listA.ans=1;
    printf("%c %d\n",listA.c,listA.ans);
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week11%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/2.png?raw=true)

## 3. 請試 qsort() 尤其是它的 compare() 函式

```C
#include <stdio.h>
#include <stdlib.h>
int compare(const void*p1,const void*p2)
{///轉成(整數的指標)/望遠鏡，準星看到的整數
    int d1=*( (int*)p1 );
    int d2=*( (int*)p2 );
    if(d1>d2) return 1;
    if(d1==d2) return 0;
    if(d1<d2) return -1;
}
int a[10]={4,8,3,7,5,2,9,1,6,10};
int main()
{
    qsort(a,10,sizeof(int),compare);
    for(int i=0;i<10;i++)
    {
        printf("%d ",a[i]);
    }
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week11%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/3.png?raw=true)

## 4.老師把 week11-4.cpp 提供給你, 把今天考試的題目, 用練習模式, 在右邊, 補上5行的 compare() 內容, 並加上註解。

```C
#include <stdio.h>
#include <stdlib.h> //qsort()
#include <string.h> //strcmp()
char name[2000][80];
char others[80];
int compare( const void *p1, const void *p2 )
{//            轉成「字串的指標」
	char*s1=(char*)p1;
	char*s2=(char*)p2;
	if(strcmp(s1,s2)> 0) return 1;
	if(strcmp(s1,s2)==0) return 0;
	if(strcmp(s1,s2)< 0) return -1;
	//return strcmp(s1,s2);//我們在第一次教的時候，這樣寫
	//return strcmp((char*)p1,(char*)p2);
}
int main()
{
	int N;
	scanf("%d", &N);
	for(int i=0; i<N; i++){
		scanf("%s", name[i] );
		gets( others );
	}

	qsort( name, N, 80, compare );

	printf("%s ", name[0] );//開頭
	int ans=1;

	for(int i=0; i<N-1; i++){
		if( strcmp( name[i], name[i+1] ) == 0 ){
			ans++;
		}else{
			printf("%d\n", ans );//結尾
			printf("%s ", name[i+1] );//新的開頭
			ans=1;
		}
	}
	printf("%d\n", ans );//結尾
}
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week11%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/4.png?raw=true)

## 5. 今天第3節課的重點: 上週練習的 UVA 10062 告訴我頻率。 我們分成6個步驟來解。 Step01: 利用 gets(line) 配合 for迴圈, 把資料一次讀1行。失敗的話就可以離開迴圈。 Step02: 利用「火車掛車廂」的想法, 讓它可以在每筆 Test Data 的 Output 中間, 有空行。

```C
#include <stdio.h>
char line[2000];//其實[1001]就可以了
int ans[256];//統計出現的次數
int main()
{
	//迴圈
	//step1: Input 一次一行，1000字母(不知道有幾行)
	
	for(int t=0;gets(line)!=NULL;t++)
	{
         	if(t>0) printf("\n");//step2: 跳行問題
		printf("blahblah\n");
		printf("blahblah\n");  
		printf("blahblah\n");     
	}
}//奇怪的迴圈
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week11%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/5.png?raw=true)

## 6. Step04, Step05

```C
#include <stdio.h>
char line[2000];//其實[1001]就可以了
int ans[256];//統計出現的次數
int main()
{
	//迴圈
	//step1: Input 一次一行，1000字母(不知道有幾行)
	
	for(int t=0;gets(line)!=NULL;t++)
	{
		//step5:資料清空
		for(int i=0;i<256;i++) ans[i]=0;
		//step3:在一行中，每個字母慢慢分析
		for(int i=0;line[i]!=0;i++)
		{
			char c=line[i];
			ans[c]++;//這個字母++
		}
		//欠 排序
		if(t>0) printf("\n");//step2: 跳行問題
		for(int i=0;i<256;i++)
		{
			//step4:印答案
			if(ans[i]>0) printf("%d %d\n",i,ans[i]);
		}
	}
}//奇怪的迴圈
```
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week11%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/6.png?raw=true)
