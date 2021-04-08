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
