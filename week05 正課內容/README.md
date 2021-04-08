#第05週 程式設計二上課內容
## 1.老師以今天考試「除惡務盡」為例, 示範了2種寫法, 其中一種是用字串的for迴圈來印。這種字串的 for迴圈很重要 for(int i=0; line[i]!=0; i++){...} 請你把程式寫出來, 並且標示 line[i]!=0 的地方 (0其實就是'\0')

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
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week05%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/1.png?raw=true)

## 2.老師重新複習 字串的宣告: char line[10]="decline"; char line2[10]={ 'p', 'r', 'o', 'p', 'e', 'r', '\0' }; 讓大家多做練習。請練習吧! 重點是, 你有看到在字串 (字元陣列) 的後面有 '\0' 這個東西, 我們叫它「字串結尾」, 課本有畫出來過哦!
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
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week05%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/2.png?raw=true)


## 3.老師示範 char line[5][10] = {"decline", "proper", "majority", "bullet", "shop"}; 並且教大家 「左邊」「右邊」的技巧。請在 CodeBlocks 畫出來

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
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week05%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/3.png?raw=true)

## 4.老師示範 char line[5][10] = {"decline", "proper", "majority", "bullet", "shop"}; 並且教大家 「左邊」「右邊」的技巧。請在 CodeBlocks 畫出來

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
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week05%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/4.png?raw=true)

## 5.老師教大家 int a[3][3]={ {1,2,3}, {4,5,6}, {7,8,9} }; 請試著畫出來

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
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week05%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/5.png?raw=true)

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
![](https://github.com/Primo093021/2020-CCE/blob/gh-pages/week05%20%E6%AD%A3%E8%AA%B2%E5%85%A7%E5%AE%B9/6.png?raw=true)
