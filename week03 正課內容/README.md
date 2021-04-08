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
