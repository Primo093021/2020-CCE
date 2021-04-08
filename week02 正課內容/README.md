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
